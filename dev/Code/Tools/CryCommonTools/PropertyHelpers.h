/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/
// Original file Copyright Crytek GMBH or its affiliates, used under license.

#ifndef CRYINCLUDE_CRYCOMMONTOOLS_PROPERTYHELPERS_H
#define CRYINCLUDE_CRYCOMMONTOOLS_PROPERTYHELPERS_H
#pragma once


namespace PropertyHelpers
{
    bool GetPropertyValue(const string& propertiesString, const char* propertyName, string& value);
    void SetPropertyValue(string& a_propertiesString, const char* propertyName, const char* value);
    bool HasProperty(const string& propertiesString, const char* propertyName);
}

#endif // CRYINCLUDE_CRYCOMMONTOOLS_PROPERTYHELPERS_H


