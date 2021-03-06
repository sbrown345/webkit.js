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
#include "JSRect.h"

#include "CSSPrimitiveValue.h"
#include "JSCSSPrimitiveValue.h"
#include "Rect.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSRectTableValues[] =
{
    { "top", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectTop), (intptr_t)0 },
    { "right", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectRight), (intptr_t)0 },
    { "bottom", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectBottom), (intptr_t)0 },
    { "left", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectLeft), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRectConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRectTable = { 16, 15, JSRectTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSRectConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRectConstructorTable = { 1, 0, JSRectConstructorTableValues, 0 };
const ClassInfo JSRectConstructor::s_info = { "RectConstructor", &Base::s_info, &JSRectConstructorTable, 0, CREATE_METHOD_TABLE(JSRectConstructor) };

JSRectConstructor::JSRectConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSRectConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSRectPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSRectConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRectConstructor, JSDOMWrapper>(exec, JSRectConstructorTable, jsCast<JSRectConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSRectPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRectPrototypeTable = { 1, 0, JSRectPrototypeTableValues, 0 };
const ClassInfo JSRectPrototype::s_info = { "RectPrototype", &Base::s_info, &JSRectPrototypeTable, 0, CREATE_METHOD_TABLE(JSRectPrototype) };

JSObject* JSRectPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRect>(vm, globalObject);
}

const ClassInfo JSRect::s_info = { "Rect", &Base::s_info, &JSRectTable, 0 , CREATE_METHOD_TABLE(JSRect) };

JSRect::JSRect(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Rect> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSRect::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSRect::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRectPrototype::create(vm, globalObject, JSRectPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSRect::destroy(JSC::JSCell* cell)
{
    JSRect* thisObject = static_cast<JSRect*>(cell);
    thisObject->JSRect::~JSRect();
}

JSRect::~JSRect()
{
    releaseImplIfNotNull();
}

bool JSRect::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRect* thisObject = jsCast<JSRect*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSRect, Base>(exec, JSRectTable, thisObject, propertyName, slot);
}

EncodedJSValue jsRectTop(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSRect* castedThis = jsDynamicCast<JSRect*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Rect& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.top()));
    return JSValue::encode(result);
}


EncodedJSValue jsRectRight(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSRect* castedThis = jsDynamicCast<JSRect*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Rect& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.right()));
    return JSValue::encode(result);
}


EncodedJSValue jsRectBottom(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSRect* castedThis = jsDynamicCast<JSRect*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Rect& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.bottom()));
    return JSValue::encode(result);
}


EncodedJSValue jsRectLeft(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSRect* castedThis = jsDynamicCast<JSRect*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    Rect& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.left()));
    return JSValue::encode(result);
}


EncodedJSValue jsRectConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSRect* domObject = jsDynamicCast<JSRect*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSRect::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSRect::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRectConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSRectOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSRectOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSRect* jsRect = jsCast<JSRect*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsRect->impl(), jsRect);
    jsRect->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Rect* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRect>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to Rect.
    COMPILE_ASSERT(!__is_polymorphic(Rect), Rect_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<Rect>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSRect>(exec, globalObject, impl);
}

Rect* toRect(JSC::JSValue value)
{
    return value.inherits(JSRect::info()) ? &jsCast<JSRect*>(value)->impl() : 0;
}

}
