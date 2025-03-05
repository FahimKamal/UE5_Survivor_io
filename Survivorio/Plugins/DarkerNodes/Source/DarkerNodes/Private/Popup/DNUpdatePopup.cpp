#include "DNUpdatePopup.h"
#include "DNUpdateConfig.h"
#include "EditorStyleSet.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/SRichTextBlock.h"
#include "SWebBrowser.h"
#include "Interfaces/IPluginManager.h"

void DNUpdatePopup::OnBrowserLinkClicked(const FSlateHyperlinkRun::FMetadata& Metadata)
{
	const FString* URL = Metadata.Find(TEXT("href"));

	if (URL)
	{
		FPlatformProcess::LaunchURL(**URL, nullptr, nullptr);
	}
}

void DNUpdatePopup::Register()
{
	const FString PluginDirectory = IPluginManager::Get().FindPlugin(TEXT("DarkerNodes"))->GetBaseDir();
	const FString UpdatedConfigFile = PluginDirectory + "/UpdateConfig.ini";
	const FString CurrentPluginVersion = "3.4";

	UDNUpdateConfig* DNUpdatePopupConfig = GetMutableDefault<UDNUpdateConfig>();

	if (FPaths::FileExists(UpdatedConfigFile))
	{
		DNUpdatePopupConfig->LoadConfig(nullptr, *UpdatedConfigFile);
	}
	else
	{
		DNUpdatePopupConfig->SaveConfig(CPF_Config, *UpdatedConfigFile);
	}

	if (DNUpdatePopupConfig->PluginVersionUpdate != CurrentPluginVersion)
	{
		DNUpdatePopupConfig->PluginVersionUpdate = CurrentPluginVersion;
		DNUpdatePopupConfig->SaveConfig(CPF_Config, *UpdatedConfigFile);

		FCoreDelegates::OnPostEngineInit.AddLambda([]()
		{
			Open();
		});
	}
}

void DNUpdatePopup::Open()
{
	if (!FSlateApplication::Get().CanDisplayWindows())
	{
		return;
	}

	TSharedRef<SBorder> WindowContent = SNew(SBorder)
			.BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
			.Padding(FMargin(8.0f, 8.0f));

	TSharedPtr<SWindow> Window = SNew(SWindow)
				.AutoCenter(EAutoCenter::PreferredWorkArea)
				.SupportsMaximize(false)
				.SupportsMinimize(false)
				.SizingRule(ESizingRule::FixedSize)
				.ClientSize(FVector2D(600, 400))
				.Title(FText::FromString("Darker Nodes"))
				.IsTopmostWindow(true)
	[
		WindowContent
	];

	const FSlateFontInfo HeadingFont = FCoreStyle::GetDefaultFontStyle("Regular", 24);
	const FSlateFontInfo ContentFont = FCoreStyle::GetDefaultFontStyle("Regular", 12);

	TSharedRef<SVerticalBox> InnerContent = SNew(SVerticalBox)
		// Default settings example
		+ SVerticalBox::Slot()
		  .AutoHeight()
		  .Padding(10)
		[
			SNew(STextBlock)
			.Font(HeadingFont)
			.Text(FText::FromString("Darker Nodes v3.4"))
		]
		+ SVerticalBox::Slot()
		  .FillHeight(1.0)
		  .Padding(10)
		[
			SNew(SBorder)
			.Padding(10)
			.BorderImage(FAppStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(SScrollBox)
				+ SScrollBox::Slot()
				[
					SNew(SRichTextBlock)
					.Text(FText::FromString(R"(
<LargeText>Hello and thank you for using Darker Nodes!</>

First thing first, if you've been enjoying using it, it would mean a lot if you could just drop <a id="browser" href="https://bit.ly/2TolSKQ">a small review on the marketplace page</> :). I also wanted to mention that I made another plugin to update the Blueprint wires style called <a id="browser" href="https://bit.ly/2U1YT8O">Electronic Nodes</>.

I also made a marketplace search engine called <a id="browser" href="https://bit.ly/3uhO9CG">Orbital Market</>. It's completely free, super fast and full of filters to refine your search.
					
But let's keep it short, here are the cool new features (and bugfixes) of version 3.4!


<LargeText>Version 3.4</>

<RichTextBlock.Bold>Bugfixes</>

* Fix 5.3 compatibility (<a id="browser" href="https://github.com/hugoattal/DarkerNodes/issues/181">issue #181</>)


<LargeText>Version 3.3</>

<RichTextBlock.Bold>Features</>

* Add option to keep default comment color (<a id="browser" href="https://github.com/hugoattal/DarkerNodes/issues/174">issue #174</>)

<RichTextBlock.Bold>Bugfixes</>

* Fix color update on 5.1 (<a id="browser" href="https://github.com/hugoattal/DarkerNodes/issues/173">issue #173</>)


<LargeText>Version 3.2</>

<RichTextBlock.Bold>Bugfixes</>

* Fix dark background for blueprint comments (<a id="browser" href="https://github.com/hugoattal/DarkerNodes/issues/167">issue #167</>)


<a id="browser" href="https://github.com/hugoattal/DarkerNodes#changelog">See complete changelog</>
)"))
					.TextStyle(FAppStyle::Get(), "NormalText")
					.DecoratorStyleSet(&FAppStyle::Get())
					.AutoWrapText(true)
					+ SRichTextBlock::HyperlinkDecorator(TEXT("browser"), FSlateHyperlinkRun::FOnClick::CreateStatic(&OnBrowserLinkClicked))
				]
			]
		]
		+ SVerticalBox::Slot()
		  .AutoHeight()
		  .Padding(10)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1.0f)
			[
				SNew(SButton)
				.Text(FText::FromString("Leave a review <3"))
				.HAlign(HAlign_Center)
				.OnClicked_Lambda([]()
				{
					const FString URL = "https://bit.ly/3vqUdGE";
					FPlatformProcess::LaunchURL(*URL, nullptr, nullptr);

					return FReply::Handled();
				})
			]
			+ SHorizontalBox::Slot().AutoWidth()
			[
				SNew(SSpacer)
				.Size(FVector2D(20, 10))
			]
			+ SHorizontalBox::Slot().FillWidth(1.0f)
			[
				SNew(SButton)
				.Text(FText::FromString("Discover Electronic Nodes"))
				.HAlign(HAlign_Center)
				.OnClicked_Lambda([]()
				{
					const FString URL = "https://bit.ly/2RPhNPl";
					FPlatformProcess::LaunchURL(*URL, nullptr, nullptr);

					return FReply::Handled();
				})
			]
			+ SHorizontalBox::Slot().AutoWidth()
			[
				SNew(SSpacer)
				.Size(FVector2D(20, 10))
			]
			+ SHorizontalBox::Slot().FillWidth(1.0f)
			[
				SNew(SButton)
				.Text(FText::FromString("Close this window"))
				.HAlign(HAlign_Center)
				.OnClicked_Lambda([Window]()
				{
					Window->RequestDestroyWindow();

					return FReply::Handled();
				})
			]
		];

	WindowContent->SetContent(InnerContent);
	Window = FSlateApplication::Get().AddWindow(Window.ToSharedRef());
}
