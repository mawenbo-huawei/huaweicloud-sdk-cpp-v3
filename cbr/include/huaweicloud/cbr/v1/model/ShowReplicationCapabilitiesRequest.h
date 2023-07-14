
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowReplicationCapabilitiesRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowReplicationCapabilitiesRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowReplicationCapabilitiesRequest
    : public ModelBase
{
public:
    ShowReplicationCapabilitiesRequest();
    virtual ~ShowReplicationCapabilitiesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowReplicationCapabilitiesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowReplicationCapabilitiesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowReplicationCapabilitiesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowReplicationCapabilitiesRequest_H_
