/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

class FColorLib
{
public:
	static float PivotRGBtoXYZ(float N)
	{
		return (N > 0.04045f ? FMath::Pow((N + 0.055f) / 1.055f, 2.4f) : N / 12.92f) * 100.0f;
	}

	static FVector RGBtoXYZ(FColor Color)
	{
		const FMatrix Matrix(
			FPlane(0.4124564f, 0.2126729f, 0.0193339f, 0),
			FPlane(0.3575761f, 0.7151522f, 0.1191920f, 0),
			FPlane(0.1804375f, 0.0721750f, 0.9503041f, 0),
			FPlane(0, 0, 0, 1));

		FVector OutColor;

		OutColor.X = PivotRGBtoXYZ(Color.R / 255.0f);
		OutColor.Y = PivotRGBtoXYZ(Color.G / 255.0f);
		OutColor.Z = PivotRGBtoXYZ(Color.B / 255.0f);

		OutColor = Matrix.TransformVector(OutColor);

		OutColor.X = FMath::Clamp(OutColor.X, 0.0f, 100.0f);
		OutColor.Y = FMath::Clamp(OutColor.Y, 0.0f, 100.0f);
		OutColor.Z = FMath::Clamp(OutColor.Z, 0.0f, 100.0f);

		return OutColor;
	}

	static float PivotXYZtoRGB(float N)
	{
		N /= 100.0f;
		return (N > 0.003131f ? FMath::Pow(N, 1.0f / 2.4f) * 1.055f - 0.055f : N * 12.92f);
	}

	static FColor XYZtoRGB(FVector Color)
	{
		const FMatrix Matrix(
			FPlane(3.2404542f, -0.9692660f, 0.0556434f, 0),
			FPlane(-1.5371385f, 1.8760108f, -0.2040259f, 0),
			FPlane(-0.4985314f, 0.0415560f, 1.0572252f, 0),
			FPlane(0, 0, 0, 1));

		FVector OutColor(Color.X, Color.Y, Color.Z);
		OutColor = Matrix.TransformVector(OutColor);

		OutColor.X = FMath::RoundToInt(PivotXYZtoRGB(OutColor.X) * 255.0f);
		OutColor.Y = FMath::RoundToInt(PivotXYZtoRGB(OutColor.Y) * 255.0f);
		OutColor.Z = FMath::RoundToInt(PivotXYZtoRGB(OutColor.Z) * 255.0f);

		OutColor.X = FMath::Clamp(OutColor.X, 0.0f, 255.0f);
		OutColor.Y = FMath::Clamp(OutColor.Y, 0.0f, 255.0f);
		OutColor.Z = FMath::Clamp(OutColor.Z, 0.0f, 255.0f);

		return FColor(OutColor.X, OutColor.Y, OutColor.Z);
	}

	static float MathXYZtoLAB(float T)
	{
		const float D = 6.0f / 29.0f;
		if (T > D * D * D)
		{
			return FMath::Pow(T, 1.0f / 3.0f);
		}
		return T / (3.0f * D * D) + 4.0f / 29.0f;
	}

	static FVector XYZtoLAB(FVector Color)
	{
		const float Xn = 95.0489f;
		const float Yn = 100.0f;
		const float Zn = 108.884f;

		FVector OutColor;

		OutColor.X = 116.0f * MathXYZtoLAB(Color.Y / Yn) - 16.0f;
		OutColor.Y = 500.0f * (MathXYZtoLAB(Color.X / Xn) - MathXYZtoLAB(Color.Y / Yn));
		OutColor.Z = 200.0f * (MathXYZtoLAB(Color.Y / Yn) - MathXYZtoLAB(Color.Z / Zn));

		OutColor.X = FMath::Clamp(OutColor.X, 0.0f, 100.0f);
		OutColor.Y = FMath::Clamp(OutColor.Y, -128.0f, 128.0f);
		OutColor.Z = FMath::Clamp(OutColor.Z, -128.0f, 128.0f);

		return OutColor;
	}

	static float MathLABtoXYZ(float T)
	{
		const float D = 6.0f / 29.0f;
		if (T > D)
		{
			return T * T * T;
		}
		return 3.0f * D * D * (T - 4.0f / 29.0f);
	}

	static FVector LABtoXYZ(FVector Color)
	{
		const float Xn = 95.0489f;
		const float Yn = 100.0f;
		const float Zn = 108.884f;

		FVector OutColor;

		OutColor.X = Xn * MathLABtoXYZ((Color.X + 16.0f) / 116.0f + Color.Y / 500.0f);
		OutColor.Y = Yn * MathLABtoXYZ((Color.X + 16.0f) / 116.0f);
		OutColor.Z = Zn * MathLABtoXYZ((Color.X + 16.0f) / 116.0f - Color.Z / 200.0f);

		OutColor.X = FMath::Clamp(OutColor.X, 0.0f, 100.0f);
		OutColor.Y = FMath::Clamp(OutColor.Y, 0.0f, 100.0f);
		OutColor.Z = FMath::Clamp(OutColor.Z, 0.0f, 100.0f);

		return OutColor;
	}

	static FVector RGBtoHSL(FColor Color)
	{
		const FVector InColor = FVector(Color.R/255.0f, Color.G/255.0f, Color.B/255.0f);
		
		const float M = FMath::Max3(InColor.X, InColor.Y, InColor.Z);
		const float m = FMath::Min3(InColor.X, InColor.Y, InColor.Z);
		const float C = M - m;

		FVector OutColor;

		if (C == 0.0f)
		{
			OutColor.X = 0;
		}
		else if (M == InColor.X)
		{
			OutColor.X = FMath::Fmod((InColor.Y - InColor.Z) / C, 6.0f) * 60.0f;
		}
		else if (M == InColor.Y)
		{
			OutColor.X = FMath::Fmod((InColor.Z - InColor.X) / C + 2.0f, 6.0f) * 60.0f;
		}
		else if (M == InColor.Z)
		{
			OutColor.X = FMath::Fmod((InColor.X - InColor.Y) / C + 4.0f, 6.0f) * 60.0f;
		}

		OutColor.Z = M;

		if (M == 0.0f)
		{
			OutColor.Y = 0;
		}
		else
		{
			OutColor.Y = C / M;
		}

		return OutColor;
	}

	static FColor HSLtoRGB(FVector Color)
	{
		const float C = Color.Y * Color.Z;
		const float T = Color.X / 60.0f;
		const float X = C * (1 - FMath::Abs(FMath::Fmod(T, 2.0f) - 1));
		const float m = Color.Z - C;

		FVector OutColor;

		if (T < 1)
		{
			OutColor.X = C;
			OutColor.Y = X;
			OutColor.Z = 0;
		}
		else if (T < 2)
		{
			OutColor.X = X;
			OutColor.Y = C;
			OutColor.Z = 0;
		}
		else if (T < 3)
		{
			OutColor.X = 0;
			OutColor.Y = C;
			OutColor.Z = X;
		}
		else if (T < 4)
		{
			OutColor.X = 0;
			OutColor.Y = X;
			OutColor.Z = C;
		}
		else if (T < 5)
		{
			OutColor.X = X;
			OutColor.Y = 0;
			OutColor.Z = C;
		}
		else if (T < 6)
		{
			OutColor.X = C;
			OutColor.Y = 0;
			OutColor.Z = X;
		}

		OutColor.X += m;
		OutColor.Y += m;
		OutColor.Z += m;

		return FColor(OutColor.X * 255, OutColor.Y * 255, OutColor.Z * 255);
	}
};
