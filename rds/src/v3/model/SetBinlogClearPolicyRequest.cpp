

#include "huaweicloud/rds/v3/model/SetBinlogClearPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetBinlogClearPolicyRequest::SetBinlogClearPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetBinlogClearPolicyRequest::~SetBinlogClearPolicyRequest() = default;

void SetBinlogClearPolicyRequest::validate()
{
}

web::json::value SetBinlogClearPolicyRequest::toJson() const
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

bool SetBinlogClearPolicyRequest::fromJson(const web::json::value& val)
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
            BinlogClearPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetBinlogClearPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetBinlogClearPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetBinlogClearPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetBinlogClearPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetBinlogClearPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetBinlogClearPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetBinlogClearPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetBinlogClearPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BinlogClearPolicyRequestBody SetBinlogClearPolicyRequest::getBody() const
{
    return body_;
}

void SetBinlogClearPolicyRequest::setBody(const BinlogClearPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetBinlogClearPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetBinlogClearPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


