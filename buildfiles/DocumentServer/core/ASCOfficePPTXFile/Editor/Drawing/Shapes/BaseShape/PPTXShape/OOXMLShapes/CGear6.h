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
#include "../PptxShape.h"

namespace OOXMLShapes
{
	class CGear6 : public CPPTXShape
	{
		public:
			CGear6()
			{
				LoadFromXML(
					_T("<ooxml-shape>")
					_T("<avLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"adj1\" fmla=\"val 15000\" />")
					  _T("<gd name=\"adj2\" fmla=\"val 3526\" />")
					_T("</avLst>")
					_T("<gdLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"a1\" fmla=\"pin 0 adj1 20000\" />")
					  _T("<gd name=\"a2\" fmla=\"pin 0 adj2 5358\" />")
					  _T("<gd name=\"th\" fmla=\"*/ ss a1 100000\" />")
					  _T("<gd name=\"lFD\" fmla=\"*/ ss a2 100000\" />")
					  _T("<gd name=\"th2\" fmla=\"*/ th 1 2\" />")
					  _T("<gd name=\"l2\" fmla=\"*/ lFD 1 2\" />")
					  _T("<gd name=\"l3\" fmla=\"+- th2 l2 0\" />")
					  _T("<gd name=\"rh\" fmla=\"+- hd2 0 th\" />")
					  _T("<gd name=\"rw\" fmla=\"+- wd2 0 th\" />")
					  _T("<gd name=\"dr\" fmla=\"+- rw 0 rh\" />")
					  _T("<gd name=\"maxr\" fmla=\"?: dr rh rw\" />")
					  _T("<gd name=\"ha\" fmla=\"at2 maxr l3\" />")
					  _T("<gd name=\"aA1\" fmla=\"+- 19800000 0 ha\" />")
					  _T("<gd name=\"aD1\" fmla=\"+- 19800000 ha 0\" />")
					  _T("<gd name=\"ta11\" fmla=\"cos rw aA1\" />")
					  _T("<gd name=\"ta12\" fmla=\"sin rh aA1\" />")
					  _T("<gd name=\"bA1\" fmla=\"at2 ta11 ta12\" />")
					  _T("<gd name=\"cta1\" fmla=\"cos rh bA1\" />")
					  _T("<gd name=\"sta1\" fmla=\"sin rw bA1\" />")
					  _T("<gd name=\"ma1\" fmla=\"mod cta1 sta1 0\" />")
					  _T("<gd name=\"na1\" fmla=\"*/ rw rh ma1\" />")
					  _T("<gd name=\"dxa1\" fmla=\"cos na1 bA1\" />")
					  _T("<gd name=\"dya1\" fmla=\"sin na1 bA1\" />")
					  _T("<gd name=\"xA1\" fmla=\"+- hc dxa1 0\" />")
					  _T("<gd name=\"yA1\" fmla=\"+- vc dya1 0\" />")
					  _T("<gd name=\"td11\" fmla=\"cos rw aD1\" />")
					  _T("<gd name=\"td12\" fmla=\"sin rh aD1\" />")
					  _T("<gd name=\"bD1\" fmla=\"at2 td11 td12\" />")
					  _T("<gd name=\"ctd1\" fmla=\"cos rh bD1\" />")
					  _T("<gd name=\"std1\" fmla=\"sin rw bD1\" />")
					  _T("<gd name=\"md1\" fmla=\"mod ctd1 std1 0\" />")
					  _T("<gd name=\"nd1\" fmla=\"*/ rw rh md1\" />")
					  _T("<gd name=\"dxd1\" fmla=\"cos nd1 bD1\" />")
					  _T("<gd name=\"dyd1\" fmla=\"sin nd1 bD1\" />")
					  _T("<gd name=\"xD1\" fmla=\"+- hc dxd1 0\" />")
					  _T("<gd name=\"yD1\" fmla=\"+- vc dyd1 0\" />")
					  _T("<gd name=\"xAD1\" fmla=\"+- xA1 0 xD1\" />")
					  _T("<gd name=\"yAD1\" fmla=\"+- yA1 0 yD1\" />")
					  _T("<gd name=\"lAD1\" fmla=\"mod xAD1 yAD1 0\" />")
					  _T("<gd name=\"a12\" fmla=\"at2 yAD1 xAD1\" />")
					  _T("<gd name=\"dxF1\" fmla=\"sin lFD a12\" />")
					  _T("<gd name=\"dyF1\" fmla=\"cos lFD a12\" />")
					  _T("<gd name=\"xF1\" fmla=\"+- xD1 dxF1 0\" />")
					  _T("<gd name=\"yF1\" fmla=\"+- yD1 dyF1 0\" />")
					  _T("<gd name=\"xE1\" fmla=\"+- xA1 0 dxF1\" />")
					  _T("<gd name=\"yE1\" fmla=\"+- yA1 0 dyF1\" />")
					  _T("<gd name=\"yC1t\" fmla=\"sin th a12\" />")
					  _T("<gd name=\"xC1t\" fmla=\"cos th a12\" />")
					  _T("<gd name=\"yC1\" fmla=\"+- yF1 yC1t 0\" />")
					  _T("<gd name=\"xC1\" fmla=\"+- xF1 0 xC1t\" />")
					  _T("<gd name=\"yB1\" fmla=\"+- yE1 yC1t 0\" />")
					  _T("<gd name=\"xB1\" fmla=\"+- xE1 0 xC1t\" />")
					  _T("<gd name=\"aD6\" fmla=\"+- 3cd4 ha 0\" />")
					  _T("<gd name=\"td61\" fmla=\"cos rw aD6\" />")
					  _T("<gd name=\"td62\" fmla=\"sin rh aD6\" />")
					  _T("<gd name=\"bD6\" fmla=\"at2 td61 td62\" />")
					  _T("<gd name=\"ctd6\" fmla=\"cos rh bD6\" />")
					  _T("<gd name=\"std6\" fmla=\"sin rw bD6\" />")
					  _T("<gd name=\"md6\" fmla=\"mod ctd6 std6 0\" />")
					  _T("<gd name=\"nd6\" fmla=\"*/ rw rh md6\" />")
					  _T("<gd name=\"dxd6\" fmla=\"cos nd6 bD6\" />")
					  _T("<gd name=\"dyd6\" fmla=\"sin nd6 bD6\" />")
					  _T("<gd name=\"xD6\" fmla=\"+- hc dxd6 0\" />")
					  _T("<gd name=\"yD6\" fmla=\"+- vc dyd6 0\" />")
					  _T("<gd name=\"xA6\" fmla=\"+- hc 0 dxd6\" />")
					  _T("<gd name=\"xF6\" fmla=\"+- xD6 0 lFD\" />")
					  _T("<gd name=\"xE6\" fmla=\"+- xA6 lFD 0\" />")
					  _T("<gd name=\"yC6\" fmla=\"+- yD6 0 th\" />")
					  _T("<gd name=\"swAng1\" fmla=\"+- bA1 0 bD6\" />")
					  _T("<gd name=\"aA2\" fmla=\"+- 1800000 0 ha\" />")
					  _T("<gd name=\"aD2\" fmla=\"+- 1800000 ha 0\" />")
					  _T("<gd name=\"ta21\" fmla=\"cos rw aA2\" />")
					  _T("<gd name=\"ta22\" fmla=\"sin rh aA2\" />")
					  _T("<gd name=\"bA2\" fmla=\"at2 ta21 ta22\" />")
					  _T("<gd name=\"yA2\" fmla=\"+- h 0 yD1\" />")
					  _T("<gd name=\"td21\" fmla=\"cos rw aD2\" />")
					  _T("<gd name=\"td22\" fmla=\"sin rh aD2\" />")
					  _T("<gd name=\"bD2\" fmla=\"at2 td21 td22\" />")
					  _T("<gd name=\"yD2\" fmla=\"+- h 0 yA1\" />")
					  _T("<gd name=\"yC2\" fmla=\"+- h 0 yB1\" />")
					  _T("<gd name=\"yB2\" fmla=\"+- h 0 yC1\" />")
					  _T("<gd name=\"xB2\" fmla=\"val xC1\" />")
					  _T("<gd name=\"swAng2\" fmla=\"+- bA2 0 bD1\" />")
					  _T("<gd name=\"aD3\" fmla=\"+- cd4 ha 0\" />")
					  _T("<gd name=\"td31\" fmla=\"cos rw aD3\" />")
					  _T("<gd name=\"td32\" fmla=\"sin rh aD3\" />")
					  _T("<gd name=\"bD3\" fmla=\"at2 td31 td32\" />")
					  _T("<gd name=\"yD3\" fmla=\"+- h 0 yD6\" />")
					  _T("<gd name=\"yB3\" fmla=\"+- h 0 yC6\" />")
					  _T("<gd name=\"aD4\" fmla=\"+- 9000000 ha 0\" />")
					  _T("<gd name=\"td41\" fmla=\"cos rw aD4\" />")
					  _T("<gd name=\"td42\" fmla=\"sin rh aD4\" />")
					  _T("<gd name=\"bD4\" fmla=\"at2 td41 td42\" />")
					  _T("<gd name=\"xD4\" fmla=\"+- w 0 xD1\" />")
					  _T("<gd name=\"xC4\" fmla=\"+- w 0 xC1\" />")
					  _T("<gd name=\"xB4\" fmla=\"+- w 0 xB1\" />")
					  _T("<gd name=\"aD5\" fmla=\"+- 12600000 ha 0\" />")
					  _T("<gd name=\"td51\" fmla=\"cos rw aD5\" />")
					  _T("<gd name=\"td52\" fmla=\"sin rh aD5\" />")
					  _T("<gd name=\"bD5\" fmla=\"at2 td51 td52\" />")
					  _T("<gd name=\"xD5\" fmla=\"+- w 0 xA1\" />")
					  _T("<gd name=\"xC5\" fmla=\"+- w 0 xB1\" />")
					  _T("<gd name=\"xB5\" fmla=\"+- w 0 xC1\" />")
					  _T("<gd name=\"xCxn1\" fmla=\"+/ xB1 xC1 2\" />")
					  _T("<gd name=\"yCxn1\" fmla=\"+/ yB1 yC1 2\" />")
					  _T("<gd name=\"yCxn2\" fmla=\"+- b 0 yCxn1\" />")
					  _T("<gd name=\"xCxn4\" fmla=\"+/ r 0 xCxn1\" />")
					_T("</gdLst>")
					_T("<ahLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<ahXY gdRefY=\"adj1\" minY=\"0\" maxY=\"20000\">")
						_T("<pos x=\"xD6\" y=\"yD6\" />")
					  _T("</ahXY>")
					  _T("<ahXY gdRefX=\"adj2\" minX=\"0\" maxX=\"5358\">")
						_T("<pos x=\"xA6\" y=\"yD6\" />")
					  _T("</ahXY>")
					_T("</ahLst>")
					_T("<cxnLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<cxn ang=\"19800000\">")
						_T("<pos x=\"xCxn1\" y=\"yCxn1\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"1800000\">")
						_T("<pos x=\"xCxn1\" y=\"yCxn2\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"cd4\">")
						_T("<pos x=\"hc\" y=\"yB3\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"9000000\">")
						_T("<pos x=\"xCxn4\" y=\"yCxn2\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"12600000\">")
						_T("<pos x=\"xCxn4\" y=\"yCxn1\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"3cd4\">")
						_T("<pos x=\"hc\" y=\"yC6\" />")
					  _T("</cxn>")
					_T("</cxnLst>")
					_T("<rect l=\"xD5\" t=\"yA1\" r=\"xA1\" b=\"yD2\" xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\" />")
					_T("<pathLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<path>")
						_T("<moveTo>")
						  _T("<pt x=\"xA1\" y=\"yA1\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xB1\" y=\"yB1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xC1\" y=\"yC1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xD1\" y=\"yD1\" />")
						_T("</lnTo>")
						_T("<arcTo hR=\"rh\" wR=\"rw\" stAng=\"bD1\" swAng=\"swAng2\" />")
						_T("<lnTo>")
						  _T("<pt x=\"xC1\" y=\"yB2\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xB1\" y=\"yC2\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xA1\" y=\"yD2\" />")
						_T("</lnTo>")
						_T("<arcTo hR=\"rh\" wR=\"rw\" stAng=\"bD2\" swAng=\"swAng1\" />")
						_T("<lnTo>")
						  _T("<pt x=\"xF6\" y=\"yB3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xE6\" y=\"yB3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xA6\" y=\"yD3\" />")
						_T("</lnTo>")
						_T("<arcTo hR=\"rh\" wR=\"rw\" stAng=\"bD3\" swAng=\"swAng1\" />")
						_T("<lnTo>")
						  _T("<pt x=\"xB4\" y=\"yC2\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xC4\" y=\"yB2\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xD4\" y=\"yA2\" />")
						_T("</lnTo>")
						_T("<arcTo hR=\"rh\" wR=\"rw\" stAng=\"bD4\" swAng=\"swAng2\" />")
						_T("<lnTo>")
						  _T("<pt x=\"xB5\" y=\"yC1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xC5\" y=\"yB1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xD5\" y=\"yA1\" />")
						_T("</lnTo>")
						_T("<arcTo hR=\"rh\" wR=\"rw\" stAng=\"bD5\" swAng=\"swAng1\" />")
						_T("<lnTo>")
						  _T("<pt x=\"xE6\" y=\"yC6\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xF6\" y=\"yC6\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"xD6\" y=\"yD6\" />")
						_T("</lnTo>")
						_T("<arcTo hR=\"rh\" wR=\"rw\" stAng=\"bD6\" swAng=\"swAng1\" />")
						_T("<close />")
					  _T("</path>")
					_T("</pathLst>")
					_T("</ooxml-shape>")
				);
			}
	};
}