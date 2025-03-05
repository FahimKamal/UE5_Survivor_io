#pragma once
#include "Framework/Text/SlateHyperlinkRun.h"

class DNUpdatePopup
{
public:
	static void Register();
	static void Open();
	static void OnBrowserLinkClicked(const FSlateHyperlinkRun::FMetadata& Metadata);
};
