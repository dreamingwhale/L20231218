// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"
#include "MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase()
{
	if (GEngine) 
	{
		//렌더링이므로 엔진을 생성하기 전에 엔진을 불러와서 실행하는 오류가 있음. 되도록 생성자에서 이런식으로 불러오지 말자. 이러면 걍 죽어버린다. 라이브 코딩은 되지만 빌드는 안됨. 
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("이건 디버그"));
	}
	UE_LOG(LogTemp, Warning, TEXT("안녕안녕안녕"));
	DefaultPawnClass = AMyPawn::StaticClass();	//복사생성자. 즉 클래스 자체를 의미한다.
	PlayerControllerClass = AMyPlayerController::StaticClass();

}
