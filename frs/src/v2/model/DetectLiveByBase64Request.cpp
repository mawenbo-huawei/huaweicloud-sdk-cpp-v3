

#include "huaweicloud/frs/v2/model/DetectLiveByBase64Request.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByBase64Request::DetectLiveByBase64Request()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveByBase64Request::~DetectLiveByBase64Request() = default;

void DetectLiveByBase64Request::validate()
{
}

web::json::value DetectLiveByBase64Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectLiveByBase64Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LiveDetectBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DetectLiveByBase64Request::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveByBase64Request::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveByBase64Request::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveByBase64Request::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LiveDetectBase64Req DetectLiveByBase64Request::getBody() const
{
    return body_;
}

void DetectLiveByBase64Request::setBody(const LiveDetectBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByBase64Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByBase64Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


