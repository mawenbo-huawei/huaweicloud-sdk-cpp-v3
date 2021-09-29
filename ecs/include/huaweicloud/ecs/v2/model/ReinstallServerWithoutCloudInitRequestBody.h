
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ReinstallServerWithoutCloudInitRequestBody
    : public ModelBase
{
public:
    ReinstallServerWithoutCloudInitRequestBody();
    virtual ~ReinstallServerWithoutCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReinstallServerWithoutCloudInitRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ReinstallServerWithoutCloudInitOption getOsReinstall() const;
    bool osReinstallIsSet() const;
    void unsetosReinstall();
    void setOsReinstall(const ReinstallServerWithoutCloudInitOption& value);


protected:
    ReinstallServerWithoutCloudInitOption osReinstall_;
    bool osReinstallIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitRequestBody_H_
