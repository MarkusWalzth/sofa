/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2017 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#ifndef SOFA_CORE_LOADER_SceneLoader_H
#define SOFA_CORE_LOADER_SceneLoader_H

#include <sofa/core/loader/BaseLoader.h>
#include <sofa/helper/fixed_array.h>


namespace sofa
{

namespace core
{

namespace loader
{

class SOFA_CORE_API SceneLoader : public virtual BaseLoader
{
public:
    SOFA_ABSTRACT_CLASS(SceneLoader, BaseLoader);

protected:
    ///Constructor
    SceneLoader();

    ///Destructor
    virtual ~SceneLoader() { }

public:
    virtual bool canLoad();

    //virtual void init();
    virtual void parse ( sofa::core::objectmodel::BaseObjectDescription* arg );

    virtual void reinit();


protected:



};


} // namespace loader

} // namespace core

} // namespace sofa

#endif
