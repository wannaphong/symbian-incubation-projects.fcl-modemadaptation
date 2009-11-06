/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of the License "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
* 
* Description: 
*
*/



#include <e32base.h>
#include <ecom/implementationproxy.h>
#include "modemat_atext.h"

const TImplementationProxy ImplementationTable[] =
	{
	IMPLEMENTATION_PROXY_ENTRY( 0x2001FCB3, CModemATExt::NewL),
	IMPLEMENTATION_PROXY_ENTRY( 0x20022E86, CModemATExt::NewL),
	IMPLEMENTATION_PROXY_ENTRY( 0x20022E87, CModemATExt::NewL),
	IMPLEMENTATION_PROXY_ENTRY( 0x20022E88, CModemATExt::NewL),
	IMPLEMENTATION_PROXY_ENTRY( 0x20022E89, CModemATExt::NewL),
	IMPLEMENTATION_PROXY_ENTRY( 0x20022E8A, CModemATExt::NewL)
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);

	return ImplementationTable;
	}


//  End of File  
