
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTransferSummary_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTransferSummary_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Link.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  VolumeTransferSummary
    : public ModelBase
{
public:
    VolumeTransferSummary();
    virtual ~VolumeTransferSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VolumeTransferSummary members

    /// <summary>
    /// 云硬盘过户记录的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘过户记录的链接
    /// </summary>

    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);

    /// <summary>
    /// 云硬盘过户记录的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云硬盘ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTransferSummary_H_
