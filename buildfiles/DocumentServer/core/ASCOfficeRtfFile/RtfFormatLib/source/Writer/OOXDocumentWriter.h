﻿/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at 20A-12 Ernesta Birznieka-Upisha
 * street, Riga, Latvia, EU, LV-1050.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#pragma once

#include "../RtfDocument.h"
#include "OOXWriter.h"
#include "../../../../Common/FileWriter.h"

class OOXDocumentWriter
{
private: 
	OOXWriter&							m_oWriter;
	RtfDocument&						m_oDocument;
	NFileWriter::CBufferedFileWriter*	m_oFileWriter;
	bool								m_bFirst;		//один параграф пишем другой храним в памяти
public: 
	OOXDocumentWriter( OOXWriter& oWriter,RtfDocument& oDocument ): m_oWriter(oWriter), m_oDocument(oDocument)
	{
		m_oFileWriter = NULL;
		m_bFirst = true;
	}
	~OOXDocumentWriter()
	{
		RELEASEOBJECT( m_oFileWriter );
	}
	std::wstring CreateXmlStart();

	std::wstring CreateXmlEnd( );

	bool SaveByItemStart( std::wstring sFolder );
	bool SaveByItem();
	bool SaveByItemEnd();

	bool SaveBySection();
	
	int GetCountSections()
	{
		return m_oDocument.GetCount();
	}
	int GetCount()
	{
		int nCount = 0;
		for( int i = 0; i < m_oDocument.GetCount(); i++ )
		{
			nCount += m_oDocument[i].props->GetCount();
		}
		return nCount;
	}
};
