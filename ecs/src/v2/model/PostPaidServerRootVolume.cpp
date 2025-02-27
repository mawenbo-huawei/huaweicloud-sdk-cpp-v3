

#include "huaweicloud/ecs/v2/model/PostPaidServerRootVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerRootVolume::PostPaidServerRootVolume()
{
    volumetype_ = "";
    volumetypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
    hwpassthrough_ = false;
    hwpassthroughIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    extendparamIsSet_ = false;
    metadataIsSet_ = false;
}

PostPaidServerRootVolume::~PostPaidServerRootVolume() = default;

void PostPaidServerRootVolume::validate()
{
}

web::json::value PostPaidServerRootVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumetypeIsSet_) {
        val[utility::conversions::to_string_t("volumetype")] = ModelBase::toJson(volumetype_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }
    if(hwpassthroughIsSet_) {
        val[utility::conversions::to_string_t("hw:passthrough")] = ModelBase::toJson(hwpassthrough_);
    }
    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_type")] = ModelBase::toJson(clusterType_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}

bool PostPaidServerRootVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("throughput"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("throughput"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThroughput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw:passthrough"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:passthrough"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwpassthrough(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PostPaidServerRootVolumeExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            PostPaidServerRootVolumeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}

std::string PostPaidServerRootVolume::getVolumetype() const
{
    return volumetype_;
}

void PostPaidServerRootVolume::setVolumetype(const std::string& value)
{
    volumetype_ = value;
    volumetypeIsSet_ = true;
}

bool PostPaidServerRootVolume::volumetypeIsSet() const
{
    return volumetypeIsSet_;
}

void PostPaidServerRootVolume::unsetvolumetype()
{
    volumetypeIsSet_ = false;
}

int32_t PostPaidServerRootVolume::getSize() const
{
    return size_;
}

void PostPaidServerRootVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PostPaidServerRootVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void PostPaidServerRootVolume::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t PostPaidServerRootVolume::getIops() const
{
    return iops_;
}

void PostPaidServerRootVolume::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool PostPaidServerRootVolume::iopsIsSet() const
{
    return iopsIsSet_;
}

void PostPaidServerRootVolume::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t PostPaidServerRootVolume::getThroughput() const
{
    return throughput_;
}

void PostPaidServerRootVolume::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool PostPaidServerRootVolume::throughputIsSet() const
{
    return throughputIsSet_;
}

void PostPaidServerRootVolume::unsetthroughput()
{
    throughputIsSet_ = false;
}

bool PostPaidServerRootVolume::isHwpassthrough() const
{
    return hwpassthrough_;
}

void PostPaidServerRootVolume::setHwpassthrough(bool value)
{
    hwpassthrough_ = value;
    hwpassthroughIsSet_ = true;
}

bool PostPaidServerRootVolume::hwpassthroughIsSet() const
{
    return hwpassthroughIsSet_;
}

void PostPaidServerRootVolume::unsethwpassthrough()
{
    hwpassthroughIsSet_ = false;
}

std::string PostPaidServerRootVolume::getClusterType() const
{
    return clusterType_;
}

void PostPaidServerRootVolume::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool PostPaidServerRootVolume::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void PostPaidServerRootVolume::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string PostPaidServerRootVolume::getClusterId() const
{
    return clusterId_;
}

void PostPaidServerRootVolume::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool PostPaidServerRootVolume::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void PostPaidServerRootVolume::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PostPaidServerRootVolumeExtendParam PostPaidServerRootVolume::getExtendparam() const
{
    return extendparam_;
}

void PostPaidServerRootVolume::setExtendparam(const PostPaidServerRootVolumeExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PostPaidServerRootVolume::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PostPaidServerRootVolume::unsetextendparam()
{
    extendparamIsSet_ = false;
}

PostPaidServerRootVolumeMetadata PostPaidServerRootVolume::getMetadata() const
{
    return metadata_;
}

void PostPaidServerRootVolume::setMetadata(const PostPaidServerRootVolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PostPaidServerRootVolume::metadataIsSet() const
{
    return metadataIsSet_;
}

void PostPaidServerRootVolume::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


