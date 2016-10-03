/*
 *  Librarian for KiCad, a free EDA CAD application.
 *  The dialog for the report settings (footprint sheet).
 *
 *  Copyright (C) 2013-2015 CompuPhase
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may not
 *  use this file except in compliance with the License. You may obtain a copy
 *  of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *  License for the specific language governing permissions and limitations
 *  under the License.
 *
 *  $Id: libmngr_dlgreport.h 5387 2015-10-22 19:31:30Z thiadmer $
 */
#ifndef __libmngr_dlgreport__
#define __libmngr_dlgreport__

/**
@file
Subclass of DlgReport, which is generated by wxFormBuilder.
*/

#include "libmngr_gui_base.h"

//// end generated include

/** Implementing DlgReport */
class libmngrDlgReport : public DlgReport
{
	public:
		/** Constructor */
		explicit libmngrDlgReport(wxWindow* parent);

	protected:
		// Handlers for DlgReport events.
		void OnOK(wxCommandEvent& event);
};

#endif // __libmngr_dlgreport__
