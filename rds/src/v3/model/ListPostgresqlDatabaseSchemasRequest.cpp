

#include "huaweicloud/rds/v3/model/ListPostgresqlDatabaseSchemasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlDatabaseSchemasRequest::ListPostgresqlDatabaseSchemasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPostgresqlDatabaseSchemasRequest::~ListPostgresqlDatabaseSchemasRequest() = default;

void ListPostgresqlDatabaseSchemasRequest::validate()
{
}

web::json::value ListPostgresqlDatabaseSchemasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListPostgresqlDatabaseSchemasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}

std::string ListPostgresqlDatabaseSchemasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPostgresqlDatabaseSchemasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPostgresqlDatabaseSchemasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPostgresqlDatabaseSchemasRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPostgresqlDatabaseSchemasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPostgresqlDatabaseSchemasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPostgresqlDatabaseSchemasRequest::getDbName() const
{
    return dbName_;
}

void ListPostgresqlDatabaseSchemasRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListPostgresqlDatabaseSchemasRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListPostgresqlDatabaseSchemasRequest::getPage() const
{
    return page_;
}

void ListPostgresqlDatabaseSchemasRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListPostgresqlDatabaseSchemasRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListPostgresqlDatabaseSchemasRequest::getLimit() const
{
    return limit_;
}

void ListPostgresqlDatabaseSchemasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPostgresqlDatabaseSchemasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPostgresqlDatabaseSchemasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


