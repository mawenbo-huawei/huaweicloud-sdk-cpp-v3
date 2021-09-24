

#include "huaweicloud/ivs/v2/model/IvsStandardByIdCardImageResponseBody_result.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByIdCardImageResponseBody_result::IvsStandardByIdCardImageResponseBody_result()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    respDataIsSet_ = false;
}

IvsStandardByIdCardImageResponseBody_result::~IvsStandardByIdCardImageResponseBody_result() = default;

void IvsStandardByIdCardImageResponseBody_result::validate()
{
}

web::json::value IvsStandardByIdCardImageResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(respDataIsSet_) {
        val[utility::conversions::to_string_t("resp_data")] = ModelBase::toJson(respData_);
    }

    return val;
}

bool IvsStandardByIdCardImageResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resp_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp_data"));
        if(!fieldValue.is_null())
        {
            std::vector<RespDataByIdCardImage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRespData(refVal);
        }
    }
    return ok;
}


std::string IvsStandardByIdCardImageResponseBody_result::getServiceName() const
{
    return serviceName_;
}

void IvsStandardByIdCardImageResponseBody_result::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool IvsStandardByIdCardImageResponseBody_result::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void IvsStandardByIdCardImageResponseBody_result::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

int32_t IvsStandardByIdCardImageResponseBody_result::getCount() const
{
    return count_;
}

void IvsStandardByIdCardImageResponseBody_result::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool IvsStandardByIdCardImageResponseBody_result::countIsSet() const
{
    return countIsSet_;
}

void IvsStandardByIdCardImageResponseBody_result::unsetcount()
{
    countIsSet_ = false;
}

std::vector<RespDataByIdCardImage>& IvsStandardByIdCardImageResponseBody_result::getRespData()
{
    return respData_;
}

void IvsStandardByIdCardImageResponseBody_result::setRespData(const std::vector<RespDataByIdCardImage>& value)
{
    respData_ = value;
    respDataIsSet_ = true;
}

bool IvsStandardByIdCardImageResponseBody_result::respDataIsSet() const
{
    return respDataIsSet_;
}

void IvsStandardByIdCardImageResponseBody_result::unsetrespData()
{
    respDataIsSet_ = false;
}

}
}
}
}
}


