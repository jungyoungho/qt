/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(3D_CANVAS)

#include "JSWebGLUniformLocation.h"

#include "WebGLUniformLocation.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLUniformLocation);

/* Hash table for prototype */

static const HashTableValue JSWebGLUniformLocationPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSWebGLUniformLocationPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSWebGLUniformLocationPrototypeTableValues, 0 };
#else
    { 1, 0, JSWebGLUniformLocationPrototypeTableValues, 0 };
#endif

const ClassInfo JSWebGLUniformLocationPrototype::s_info = { "WebGLUniformLocationPrototype", 0, &JSWebGLUniformLocationPrototypeTable, 0 };

JSObject* JSWebGLUniformLocationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLUniformLocation>(exec, globalObject);
}

const ClassInfo JSWebGLUniformLocation::s_info = { "WebGLUniformLocation", 0, 0, 0 };

JSWebGLUniformLocation::JSWebGLUniformLocation(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLUniformLocation> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSWebGLUniformLocation::~JSWebGLUniformLocation()
{
    forgetDOMObject(this, impl());
}

JSObject* JSWebGLUniformLocation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebGLUniformLocationPrototype(JSWebGLUniformLocationPrototype::createStructure(globalObject->objectPrototype()));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLUniformLocation* object)
{
    return getDOMObjectWrapper<JSWebGLUniformLocation>(exec, globalObject, object);
}
WebGLUniformLocation* toWebGLUniformLocation(JSC::JSValue value)
{
    return value.inherits(&JSWebGLUniformLocation::s_info) ? static_cast<JSWebGLUniformLocation*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(3D_CANVAS)