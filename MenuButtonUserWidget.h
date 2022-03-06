// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuButtonUserWidget.generated.h"

class UButton;

//USTRUCT(BlueprintType)
//struct FMenuButtonNode
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MenuButton)
//	FString Name;
//
//	TArray<FMenuButtonNode> SubNodes;
//
//	FORCEINLINE int32 GetSubNodesNum() { return SubNodes.Num(); }
//};

/**
 * 
 */
UCLASS()
class MENUBUTTON_API UMenuButtonUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual bool Initialize();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MenuButton)
	UButton* CurrentButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MenuButton)
	FString Name;

	//FMenuButtonNode CurrentNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MenuButton)
	TArray<UMenuButtonUserWidget*> SubButtons;

	FORCEINLINE int32 GetSubButtonsNum() { return SubButtons.Num(); }

	UFUNCTION()
	void ButtonClicked();

	UFUNCTION()
	void ButtonHovered();

	UFUNCTION(BlueprintCallable)
	void SetDelegates();
};
