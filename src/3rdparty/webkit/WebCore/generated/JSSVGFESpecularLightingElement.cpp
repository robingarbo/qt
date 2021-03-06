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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFESpecularLightingElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFESpecularLightingElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFESpecularLightingElement);

/* Hash table */

static const HashTableValue JSSVGFESpecularLightingElementTableValues[13] =
{
    { "in1", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementIn1), (intptr_t)0 },
    { "surfaceScale", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSurfaceScale), (intptr_t)0 },
    { "specularConstant", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSpecularConstant), (intptr_t)0 },
    { "specularExponent", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSpecularExponent), (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementX), (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementY), (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementWidth), (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementHeight), (intptr_t)0 },
    { "result", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementResult), (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementClassName), (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementStyle), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFESpecularLightingElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSSVGFESpecularLightingElementTableValues, 0 };
#else
    { 36, 31, JSSVGFESpecularLightingElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGFESpecularLightingElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFESpecularLightingElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFESpecularLightingElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGFESpecularLightingElementConstructorTableValues, 0 };
#endif

class JSSVGFESpecularLightingElementConstructor : public DOMConstructorObject {
public:
    JSSVGFESpecularLightingElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGFESpecularLightingElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGFESpecularLightingElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGFESpecularLightingElementConstructor::s_info = { "SVGFESpecularLightingElementConstructor", 0, &JSSVGFESpecularLightingElementConstructorTable, 0 };

bool JSSVGFESpecularLightingElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFESpecularLightingElementConstructor, DOMObject>(exec, &JSSVGFESpecularLightingElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFESpecularLightingElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFESpecularLightingElementConstructor, DOMObject>(exec, &JSSVGFESpecularLightingElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFESpecularLightingElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGFESpecularLightingElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFESpecularLightingElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFESpecularLightingElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGFESpecularLightingElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFESpecularLightingElementPrototype::s_info = { "SVGFESpecularLightingElementPrototype", 0, &JSSVGFESpecularLightingElementPrototypeTable, 0 };

JSObject* JSSVGFESpecularLightingElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFESpecularLightingElement>(exec, globalObject);
}

bool JSSVGFESpecularLightingElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFESpecularLightingElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFESpecularLightingElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFESpecularLightingElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFESpecularLightingElement::s_info = { "SVGFESpecularLightingElement", &JSSVGElement::s_info, &JSSVGFESpecularLightingElementTable, 0 };

JSSVGFESpecularLightingElement::JSSVGFESpecularLightingElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFESpecularLightingElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFESpecularLightingElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFESpecularLightingElementPrototype(JSSVGFESpecularLightingElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFESpecularLightingElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFESpecularLightingElement, Base>(exec, &JSSVGFESpecularLightingElementTable, this, propertyName, slot);
}

bool JSSVGFESpecularLightingElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFESpecularLightingElement, Base>(exec, &JSSVGFESpecularLightingElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFESpecularLightingElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementSurfaceScale(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->surfaceScaleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementSpecularConstant(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->specularConstantAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementSpecularExponent(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->specularExponentAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFESpecularLightingElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* castedThis = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFESpecularLightingElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFESpecularLightingElement* domObject = static_cast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    return JSSVGFESpecularLightingElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFESpecularLightingElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFESpecularLightingElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGFESpecularLightingElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGFESpecularLightingElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFESpecularLightingElement* castedThisObj = static_cast<JSSVGFESpecularLightingElement*>(asObject(thisValue));
    SVGFESpecularLightingElement* imp = static_cast<SVGFESpecularLightingElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
