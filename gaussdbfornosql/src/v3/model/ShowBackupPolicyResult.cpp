

#include "huaweicloud/gaussdbfornosql/v3/model/ShowBackupPolicyResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowBackupPolicyResult::ShowBackupPolicyResult()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

ShowBackupPolicyResult::~ShowBackupPolicyResult() = default;

void ShowBackupPolicyResult::validate()
{
}

web::json::value ShowBackupPolicyResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}

bool ShowBackupPolicyResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}

int32_t ShowBackupPolicyResult::getKeepDays() const
{
    return keepDays_;
}

void ShowBackupPolicyResult::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ShowBackupPolicyResult::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ShowBackupPolicyResult::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string ShowBackupPolicyResult::getStartTime() const
{
    return startTime_;
}

void ShowBackupPolicyResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowBackupPolicyResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowBackupPolicyResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowBackupPolicyResult::getPeriod() const
{
    return period_;
}

void ShowBackupPolicyResult::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowBackupPolicyResult::periodIsSet() const
{
    return periodIsSet_;
}

void ShowBackupPolicyResult::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


