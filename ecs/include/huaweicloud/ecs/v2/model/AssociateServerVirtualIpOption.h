
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  AssociateServerVirtualIpOption
    : public ModelBase
{
public:
    AssociateServerVirtualIpOption();
    virtual ~AssociateServerVirtualIpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociateServerVirtualIpOption members

    /// <summary>
    /// 网卡的子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 网卡即将配置的私有IP的地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 私有IP的allowed_address_pairs属性是否添加网卡的IP/Mac对。
    /// </summary>

    bool isReverseBinding() const;
    bool reverseBindingIsSet() const;
    void unsetreverseBinding();
    void setReverseBinding(bool value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    bool reverseBinding_;
    bool reverseBindingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpOption_H_
