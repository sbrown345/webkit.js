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

#if ENABLE(SVG)

#include "JSSVGElement.h"

#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGElement.h"
#include "JSSVGSVGElement.h"
#include "SVGElement.h"
#include "SVGSVGElement.h"
#include "StyleProperties.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGElementTableValues[] =
{
    { "xmlbase", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementXmlbase), (intptr_t)setJSSVGElementXmlbase },
    { "ownerSVGElement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementOwnerSVGElement), (intptr_t)0 },
    { "viewportElement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementViewportElement), (intptr_t)0 },
    { "xmllang", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementXmllang), (intptr_t)setJSSVGElementXmllang },
    { "xmlspace", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementXmlspace), (intptr_t)setJSSVGElementXmlspace },
    { "className", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementClassName), (intptr_t)0 },
    { "style", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementStyle), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGElementTable = { 16, 15, JSSVGElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGElementConstructorTable = { 1, 0, JSSVGElementConstructorTableValues, 0 };
const ClassInfo JSSVGElementConstructor::s_info = { "SVGElementConstructor", &Base::s_info, &JSSVGElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGElementConstructor) };

JSSVGElementConstructor::JSSVGElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGElementConstructor, JSDOMWrapper>(exec, JSSVGElementConstructorTable, jsCast<JSSVGElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGElementPrototypeTableValues[] =
{
    { "getPresentationAttribute", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGElementPrototypeFunctionGetPresentationAttribute), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGElementPrototypeTable = { 2, 1, JSSVGElementPrototypeTableValues, 0 };
const ClassInfo JSSVGElementPrototype::s_info = { "SVGElementPrototype", &Base::s_info, &JSSVGElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGElementPrototype) };

JSObject* JSSVGElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGElement>(vm, globalObject);
}

bool JSSVGElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGElementPrototype* thisObject = jsCast<JSSVGElementPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSSVGElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGElement::s_info = { "SVGElement", &Base::s_info, &JSSVGElementTable, 0 , CREATE_METHOD_TABLE(JSSVGElement) };

JSSVGElement::JSSVGElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> impl)
    : JSElement(structure, globalObject, impl)
{
}

void JSSVGElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGElementPrototype::create(vm, globalObject, JSSVGElementPrototype::createStructure(vm, globalObject, JSElementPrototype::self(vm, globalObject)));
}

bool JSSVGElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGElement* thisObject = jsCast<JSSVGElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGElement, Base>(exec, JSSVGElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGElementXmlbase(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.xmlbase());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementOwnerSVGElement(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.ownerSVGElement()));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementViewportElement(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.viewportElement()));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementXmllang(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.xmllang());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementXmlspace(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.xmlspace());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementClassName(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementStyle(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.style()));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGElement* domObject = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSSVGElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGElement* thisObject = jsCast<JSSVGElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSSVGElement, Base>(exec, propertyName, value, JSSVGElementTable, thisObject, slot);
}

void setJSSVGElementXmlbase(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    SVGElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setXmlbase(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSSVGElementXmllang(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    SVGElement& impl = castedThis->impl();
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setXmllang(nativeValue);
}


void setJSSVGElementXmlspace(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    SVGElement& impl = castedThis->impl();
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setXmlspace(nativeValue);
}


JSValue JSSVGElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGElement* castedThis = jsDynamicCast<JSSVGElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGElement::info());
    SVGElement& impl = castedThis->impl();
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getPresentationAttribute(name)));
    return JSValue::encode(result);
}

SVGElement* toSVGElement(JSC::JSValue value)
{
    return value.inherits(JSSVGElement::info()) ? &jsCast<JSSVGElement*>(value)->impl() : 0;
}

}

#endif // ENABLE(SVG)
