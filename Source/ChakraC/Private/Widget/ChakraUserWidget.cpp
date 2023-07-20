// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/ChakraUserWidget.h"

void UChakraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
