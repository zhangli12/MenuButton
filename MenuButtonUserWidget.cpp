// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuButtonUserWidget.h"
#include "Components/Button.h"

bool UMenuButtonUserWidget::Initialize()
{
    Super::Initialize();

    return true;
}

void UMenuButtonUserWidget::ButtonClicked()
{
	//access the other specific widget
	UE_LOG(LogTemp, Warning, TEXT("Button Clicked!"));
}

void UMenuButtonUserWidget::ButtonHovered()
{
	//access the sub buttons
	UE_LOG(LogTemp, Warning, TEXT("SubButtons should appear."));
}

void UMenuButtonUserWidget::SetDelegates()
{
	if (CurrentButton)
	{
		if (GetSubButtonsNum() > 0)
		{
			CurrentButton->OnHovered.AddDynamic(this, &UMenuButtonUserWidget::ButtonHovered);
		}
		else
		{
			CurrentButton->OnClicked.AddDynamic(this, &UMenuButtonUserWidget::ButtonClicked);
		}
	}
}
