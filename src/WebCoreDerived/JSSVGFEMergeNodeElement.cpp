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

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFEMergeNodeElement.h"

#include "JSSVGAnimatedString.h"
#include "SVGFEMergeNodeElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEMergeNodeElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMergeNodeElementIn1), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMergeNodeElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEMergeNodeElementTable = { 4, 3, JSSVGFEMergeNodeElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEMergeNodeElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEMergeNodeElementConstructorTable = { 1, 0, JSSVGFEMergeNodeElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEMergeNodeElementConstructor::s_info = { "SVGFEMergeNodeElementConstructor", &Base::s_info, &JSSVGFEMergeNodeElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEMergeNodeElementConstructor) };

JSSVGFEMergeNodeElementConstructor::JSSVGFEMergeNodeElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEMergeNodeElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEMergeNodeElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEMergeNodeElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMergeNodeElementConstructor, JSDOMWrapper>(exec, JSSVGFEMergeNodeElementConstructorTable, jsCast<JSSVGFEMergeNodeElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEMergeNodeElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEMergeNodeElementPrototypeTable = { 1, 0, JSSVGFEMergeNodeElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEMergeNodeElementPrototype::s_info = { "SVGFEMergeNodeElementPrototype", &Base::s_info, &JSSVGFEMergeNodeElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEMergeNodeElementPrototype) };

JSObject* JSSVGFEMergeNodeElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEMergeNodeElement>(vm, globalObject);
}

const ClassInfo JSSVGFEMergeNodeElement::s_info = { "SVGFEMergeNodeElement", &Base::s_info, &JSSVGFEMergeNodeElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEMergeNodeElement) };

JSSVGFEMergeNodeElement::JSSVGFEMergeNodeElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEMergeNodeElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEMergeNodeElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFEMergeNodeElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEMergeNodeElementPrototype::create(vm, globalObject, JSSVGFEMergeNodeElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFEMergeNodeElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEMergeNodeElement* thisObject = jsCast<JSSVGFEMergeNodeElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFEMergeNodeElement, Base>(exec, JSSVGFEMergeNodeElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGFEMergeNodeElementIn1(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEMergeNodeElement* castedThis = jsDynamicCast<JSSVGFEMergeNodeElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEMergeNodeElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMergeNodeElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGFEMergeNodeElement* domObject = jsDynamicCast<JSSVGFEMergeNodeElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFEMergeNodeElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFEMergeNodeElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEMergeNodeElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
