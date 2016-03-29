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

#ifndef JSXSLTProcessor_h
#define JSXSLTProcessor_h

#if ENABLE(XSLT)

#include "DOMObjectWithSVGContext.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class XSLTProcessor;

class JSXSLTProcessor : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSXSLTProcessor(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<XSLTProcessor>);
    virtual ~JSXSLTProcessor();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }


    // Custom functions
    JSC::JSValue importStylesheet(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue transformToFragment(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue transformToDocument(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setParameter(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue getParameter(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue removeParameter(JSC::ExecState*, const JSC::ArgList&);
    XSLTProcessor* impl() const { return m_impl.get(); }

private:
    RefPtr<XSLTProcessor> m_impl;
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, XSLTProcessor*);
XSLTProcessor* toXSLTProcessor(JSC::JSValue);

class JSXSLTProcessorPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }
    JSXSLTProcessorPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionImportStylesheet(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToFragment(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToDocument(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionSetParameter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionGetParameter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionRemoveParameter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionClearParameters(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionReset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);

} // namespace WebCore

#endif // ENABLE(XSLT)

#endif