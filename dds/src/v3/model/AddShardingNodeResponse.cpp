

#include "huaweicloud/dds/v3/model/AddShardingNodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AddShardingNodeResponse::AddShardingNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

AddShardingNodeResponse::~AddShardingNodeResponse() = default;

void AddShardingNodeResponse::validate()
{
}

web::json::value AddShardingNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}

bool AddShardingNodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}

std::string AddShardingNodeResponse::getJobId() const
{
    return jobId_;
}

void AddShardingNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AddShardingNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AddShardingNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string AddShardingNodeResponse::getOrderId() const
{
    return orderId_;
}

void AddShardingNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool AddShardingNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void AddShardingNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


