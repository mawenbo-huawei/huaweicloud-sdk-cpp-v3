

#include "huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResizeInstanceFlavorRequest::ResizeInstanceFlavorRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeInstanceFlavorRequest::~ResizeInstanceFlavorRequest() = default;

void ResizeInstanceFlavorRequest::validate()
{
}

web::json::value ResizeInstanceFlavorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ResizeInstanceFlavorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OpenGaussResizeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ResizeInstanceFlavorRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResizeInstanceFlavorRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResizeInstanceFlavorRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResizeInstanceFlavorRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResizeInstanceFlavorRequest::getInstanceId() const
{
    return instanceId_;
}

void ResizeInstanceFlavorRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResizeInstanceFlavorRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResizeInstanceFlavorRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpenGaussResizeRequest ResizeInstanceFlavorRequest::getBody() const
{
    return body_;
}

void ResizeInstanceFlavorRequest::setBody(const OpenGaussResizeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeInstanceFlavorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeInstanceFlavorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


