
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainItemLocationDetails_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainItemLocationDetails_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/DomainRegion.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  DomainItemLocationDetails
    : public ModelBase
{
public:
    DomainItemLocationDetails();
    virtual ~DomainItemLocationDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DomainItemLocationDetails members

    /// <summary>
    /// 数据起始时间戳，可能与请求时间不一致
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 数据结束时间戳，可能与请求时间不一致
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 指标类型
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// 域名详情数据列表
    /// </summary>

    std::vector<DomainRegion>& getDomains();
    bool domainsIsSet() const;
    void unsetdomains();
    void setDomains(const std::vector<DomainRegion>& value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::vector<DomainRegion> domains_;
    bool domainsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainItemLocationDetails_H_
