// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/ChakraSwordProjectile.h"

#include "NiagaraComponent.h"

AChakraSwordProjectile::AChakraSwordProjectile()
{
	StatMesh = CreateDefaultSubobject<UStaticMeshComponent>("StatMesh");
	StatMesh->SetupAttachment(RootComponent);

	NiagaraEffect1 = CreateDefaultSubobject<UNiagaraComponent>("NiagaraEffect1");
	NiagaraEffect1->SetupAttachment(RootComponent);


	NiagaraEffect2 = CreateDefaultSubobject<UNiagaraComponent>("NiagaraEffect2");
	NiagaraEffect2->SetupAttachment(RootComponent);
}
