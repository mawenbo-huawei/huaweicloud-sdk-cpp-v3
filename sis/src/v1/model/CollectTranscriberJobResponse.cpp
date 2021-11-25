

#include "huaweicloud/sis/v1/model/CollectTranscriberJobResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CollectTranscriberJobResponse::CollectTranscriberJobResponse()
{
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    segmentsIsSet_ = false;
}

CollectTranscriberJobResponse::~CollectTranscriberJobResponse() = default;

void CollectTranscriberJobResponse::validate()
{
}

web::json::value CollectTranscriberJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(segmentsIsSet_) {
        val[utility::conversions::to_string_t("segments")] = ModelBase::toJson(segments_);
    }

    return val;
}

bool CollectTranscriberJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segments"));
        if(!fieldValue.is_null())
        {
            std::vector<Segment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegments(refVal);
        }
    }
    return ok;
}


std::string CollectTranscriberJobResponse::getStatus() const
{
    return status_;
}

void CollectTranscriberJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectTranscriberJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CollectTranscriberJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getCreateTime() const
{
    return createTime_;
}

void CollectTranscriberJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CollectTranscriberJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CollectTranscriberJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getStartTime() const
{
    return startTime_;
}

void CollectTranscriberJobResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CollectTranscriberJobResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CollectTranscriberJobResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getFinishTime() const
{
    return finishTime_;
}

void CollectTranscriberJobResponse::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool CollectTranscriberJobResponse::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void CollectTranscriberJobResponse::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::vector<Segment>& CollectTranscriberJobResponse::getSegments()
{
    return segments_;
}

void CollectTranscriberJobResponse::setSegments(const std::vector<Segment>& value)
{
    segments_ = value;
    segmentsIsSet_ = true;
}

bool CollectTranscriberJobResponse::segmentsIsSet() const
{
    return segmentsIsSet_;
}

void CollectTranscriberJobResponse::unsetsegments()
{
    segmentsIsSet_ = false;
}

}
}
}
}
}


