dnl m4 defines:
dnl    TYPE == OPENLDAP or ADS
dnl    MULTISERVER == 1, or other
dnl
##############################################################
#  LDAP/ACTIVE DIRECTORY USER PLUGIN SETTINGS
#
# Any of these directives that are required, are only required if the
# userplugin parameter is set to ldap.

# LDAP host name/IP address
# Optional, default = localhost
ldap_host = ifelse(TYPE,`OPENLDAP',`localhost',`')

# LDAP port
# Optional, default = 389
# Use 636 for ldaps
ldap_port = 389

# LDAP protocol
# Optional, default = ldap
# use 'ldaps' for SSL encryption. Make sure /etc/ldap/ldap.conf is
# configured correctly with TLS_CACERT
ldap_protocol = ldap

# The charset that strings are stored in on the LDAP server. Normally this
# is utf-8, but this can differ according to your setup. The charset specified
# here must be supported by your iconv(1) setup. See iconv -l for all charset
ldap_server_charset = utf-8

# The DN of the user to bind as for normal operations (not used for
# authentication if ldap_authentication_method is set to "bind"
# Optional, default = empty (anonymous bind)
# The userPassword attribute must be readable for this user if the
# ldap_authentication_method option is set to password.
ldap_bind_user = ifelse(TYPE,`OPENLDAP',`cn=admin',`cn=Administrator'),cn=users,dc=zarafa,dc=com

# LDAP bind password
# Optional, default = empty (no password)
ldap_bind_passwd = 

# The timeout for network operations in seconds
ldap_network_timeout = 30

# When an object (user/group/company) is changed, this attribute will also change:
# Active directory: uSNChanged
# LDAP: modifyTimestamp
ldap_last_modification_attribute = ifelse(TYPE,`OPENLDAP',`modifyTimestamp',`uSNChanged')

# ldap_page_size limits the number of results from a query that will be downloaded at a time.
# Default ADS MaxPageSize is 1000.
ldap_page_size = 1000

##########
# Object settings

# Top level search base, every object should be available under this tree
ldap_search_base = dc=zarafa,dc=com

# attribute name which is/(should: was) used in ldap_user_search_filter
ldap_object_type_attribute = objectClass
ldap_user_type_attribute_value = ifelse(TYPE,`OPENLDAP',`posixAccount',`user')
ldap_group_type_attribute_value = ifelse(TYPE,`OPENLDAP',`posixGroup',`group')
ldap_contact_type_attribute_value = ifelse(TYPE,`OPENLDAP',`zarafa-contact',`contact')
ldap_company_type_attribute_value = organizationalUnit
ldap_addresslist_type_attribute_value = ifelse(TYPE,`OPENLDAP',`zarafa-addresslist',`zarafaAddresslist')
ldap_dynamicgroup_type_attribute_value = ifelse(TYPE,`OPENLDAP',`zarafa-dynamicgroup',`zarafaDynamicGroup')
ifelse(MULTISERVER,`1',`ldap_server_type_attribute_value = ifelse(TYPE,`OPENLDAP',`ipHost',`computer')',`')

##########
# There should be no need to edit any values below this line
##########

##########
# User settings

# Extra search for users using this LDAP filter.  See ldap_search(3) or RFC
# 2254 for details on the filter syntax.
#
# Hint: Use the zarafaAccount attribute in the filter to differentiate
# between non-zarafa and zarafa users.
#
# Note: This filter should include contacts.
#
# Optional, default = empty (match everything)
# For active directory, use:
#   (objectCategory=Person)
# For LDAP with posix users:
#   no need to use the search filter.
ldap_user_search_filter = ifelse(TYPE,`OPENLDAP',`',`(objectCategory=Person)')

# unique user id for find the user
# Required
# For active directory, use:
#    objectGuid ** WARNING: This WAS: objectSid ** Updates *WILL* fail! **
# For LDAP with posixAccount, use:
#    uidNumber
ifelse(TYPE,`OPENLDAP',`dnl
# Note: contacts also use this field for uniqueness. If you change this,
# you might need to update the zarafa.schema file too, and change
# the MUST uidNumber to whatever you set here.')dnl
ldap_user_unique_attribute = ifelse(TYPE,`OPENLDAP',`uidNumber',`objectGuid')

# Type of unique user id
# default: text
# For active directory, use:
#		binary
# For LDAP with posix user, use:
#		text
ldap_user_unique_attribute_type = ifelse(TYPE,`OPENLDAP',`text',`binary')

# Optional, default = cn
# For active directory, use:
#   cn or displayName
# For LDAP with posix user, use:
#   cn
ldap_fullname_attribute = ifelse(TYPE,`OPENLDAP',`cn',`cn')

# Optional, default = uid
# Active directory: sAMAccountName
# LDAP: uid
ldap_loginname_attribute = ifelse(TYPE,`OPENLDAP',`uid',`sAMAccountName')

# Optional, default = userPassword
# Active directory: unicodePwd
# LDAP: userPassword
ldap_password_attribute = ifelse(TYPE,`OPENLDAP',`userPassword',`unicodePwd')

# If set to bind, users are authenticated by trying to bind to the
# LDAP tree using their username + password.  Otherwise, the
# ldap_password_attribute is requested and checked.
# Optional, default = bind
# Choices: bind, password
# Active directory: bind
# LDAP: password
ldap_authentication_method = ifelse(TYPE,`OPENLDAP',`password',`bind')

# Optional, default = mail
# Active directory: mail
# LDAP: mail
ldap_emailaddress_attribute = mail

# Optional, default = zarafaAliases
# Active directory: zarafaAliases
# LDAP: zarafaAliases
ldap_emailaliases_attribute = ifelse(TYPE,`OPENLDAP',`zarafaAliases',`otherMailbox')

# Whether the user is an admin.  The field is interpreted as a
# boolean, 0 and false (case insensitive) meaning no, all other values
# yes.
# Optional, default = zarafaAdmin
# Active directory: zarafaAdmin
# LDAP: zarafaAdmin
ldap_isadmin_attribute = zarafaAdmin

# Whether a user is a non-active user. This means that the user will
# not count towards your user count, but the user will also not be
# able to log in
# Optional, default = empty
# Active directory: zarafaSharedStoreOnly
# LDAP: zarafaSharedStoreOnly
ldap_nonactive_attribute = 

# A nonactive store, or resource, can be specified to be a user, room or equipment.
# Set it to 'room' or 'equipment' to make such types. If set to empty,
# or wrong word, or 'user' it will be a nonactive user.
# Optional, default = zarafaResourceType
# Active directory: zarafaResourceType
# LDAP: zarafaResourceType
ldap_resource_type_attribute = zarafaResourceType

# Numeric resource capacity
# Optional, default = zarafaResourceCapacity
# Active directory: zarafaResourceCapacity
# LDAP: zarafaResourceCapacity
ldap_resource_capacity_attribute = zarafaResourceCapacity

# Optional
# The attribute which indicates which users are allowed
# to send on behalf of the selected user
ldap_sendas_attribute = zarafaSendAsPrivilege

# Optional, default = text
# Active directory: dn
# LDAP: text
ldap_sendas_attribute_type = ifelse(TYPE,`OPENLDAP',`text',`dn')

# The attribute of the user and group which is listed in 
# the ldap_sendas_attribute
# Empty default, using ldap_user_unique_attribute
ldap_sendas_relation_attribute = ifelse(TYPE,`OPENLDAP',`',`distinguishedName')

# Optional, default = userCertificate
# Active directory: userCertificate
# LDAP: userCertificate
ldap_user_certificate_attribute = userCertificate

# Load extra user properties from the propmap file
!propmap /etc/zarafa/ldap.propmap.cfg

##########
# Group settings

# Search for groups using this LDAP filter.  See ldap_search(3) for
# details on the filter syntax.
# Hint: Use the zarafaAccount attribute in the filter to differentiate
# between non-zarafa and zarafa groups.
# Optional, default = empty (match everything)
# For active directory, use:
#   (objectCategory=Group)
# For LDAP with posix groups, use:
#   no need to set the search filter
ldap_group_search_filter = ifelse(TYPE,`OPENLDAP',`',`(objectCategory=Group)')

# unique group id for find the group
# Required
# For active directory, use:
#    objectSid
# For LDAP with posix group, use:
#    gidNumber
ldap_group_unique_attribute = ifelse(TYPE,`OPENLDAP',`gidNumber',`objectSid')

# Type of unique group id
# default: text
# For active directory, use:
#		binary
# For LDAP with posix group, use:
#		text
ldap_group_unique_attribute_type = ifelse(TYPE,`OPENLDAP',`text',`binary')

# Optional, default = cn
# Active directory: cn
# LDAP: cn
ldap_groupname_attribute = cn

# Optional, default = member
# Active directory: member
# LDAP: memberUid
ldap_groupmembers_attribute = ifelse(TYPE,`OPENLDAP',`memberUid',`member')

# Optional, default = text
# Active directory: dn
# LDAP: text
ldap_groupmembers_attribute_type = ifelse(TYPE,`OPENLDAP',`text',`dn')

# The attribute of the user which is listed in ldap_groupmember_attribute
# Active directory: empty, matching dn's
# LDAP: uidNumber, matching users in ldap_user_unique_attribute
ldap_groupmembers_relation_attribute = ifelse(TYPE,`OPENLDAP',`uidNumber',`')

# A group can also be used for security, eg. setting permissions on folders.
# This makes a group a security group. The zarafaSecurityGroup value is boolean.
# Optional, default = zarafaSecurityGroup
# Active directory = groupType
# LDAP: zarafaSecurityGroup
ldap_group_security_attribute = ifelse(TYPE,`OPENLDAP',`zarafaSecurityGroup',`groupType')

# In ADS servers, a special bitmask action is required on the groupType field.
# This is actived by setting the ldap_group_security_attribute_type to `''ads`''
# Otherwise, just the presence of the field will make the group security enabled.
# Optional, default = boolean
# Active directory = ads
# LDAP: boolean
ldap_group_security_attribute_type = ifelse(TYPE,`OPENLDAP',`boolean',`ads')

##########
# Company settings

# Search for companies using this LDAP filter.
# Hint: Use the zarafaAccount attribute in the filter to differentiate
# between non-zarafa and zarafa companies.
# Optional, default = empty (match everything)
# For active directory, use:
#   (objectCategory=Company)
# For LDAP with posix users, use:
#   no need to set the filter
ldap_company_search_filter =

# unique company id for find the company
# Active directory: objectGUID
# LDAP: ou
ldap_company_unique_attribute = ifelse(TYPE,`OPENLDAP',`ou',`objectGUID')

# Optional, default = text
# Active directory: binary
# LDAP: text
ldap_company_unique_attribute_type = ifelse(TYPE,`OPENLDAP',`text',`binary')

# Optional, default = ou
# Active directory: ou
# LDAP: ou
ldap_companyname_attribute = ou

# Optional
# The attribute which indicates which companies are allowed
# to view the members of the selected company
ldap_company_view_attribute = zarafaViewPrivilege

# Optional, default = text
ldap_company_view_attribute_type = text

# The attribute of the company which is listed in the
# ldap_company_view_attribute
# Empty default, using ldap_company_unique_attribute
ldap_company_view_relation_attribute =

# Optional
# The attribute which indicates which users from different companies
# are administrator over the selected company.
ldap_company_admin_attribute = zarafaAdminPrivilege

# Optional, default = text
# Active directory: dn
# LDAP: text
ldap_company_admin_attribute_type = text

# The attribute of the company which is listed in the
# ldap_company_admin_attribute
# Empty default, using ldap_user_unique_attribute
ldap_company_admin_relation_attribute = 

# The attribute which indicates which user is the system administrator
# for the specified company.
ldap_company_system_admin_attribute = zarafaSystemAdmin

# Optional, default = text
# Active directory: dn
# LDAP: text
ldap_company_system_admin_attribute_type = text

# The attribute of the company which is listed in the
# ldap_company_system_admin attribute
# Empty default, using ldap_user_unique_attribute
ldap_company_system_admin_relation_attribute =


##########
# Addresslist settings

# Add a filter to the addresslist search
# Hint: Use the zarafaAccount attribute in the filter to differentiate
# between non-zarafa and zarafa addresslists.
# Optional, default = empty (match everything)
ldap_addresslist_search_filter = 

# This is the unique attribute of a addresslist which is never going
# to change, unless the addresslist is removed from LDAP. When this
# value changes, Zarafa will remove the previous addresslist from the
# database, and create a new addresslist with this unique value
ldap_addresslist_unique_attribute = cn

# This value can be 'text' or 'binary'. For OpenLDAP, only text is used.
ldap_addresslist_unique_attribute_type = text

# This is the name of the attribute on the addresslist object that
# specifies the filter to be applied for this addresslist. All users
# matching this filter AND matching the default
# ldap_user_search_filter will be included in the addresslist
ldap_addresslist_filter_attribute = zarafaFilter

# This is the name of the attribute on the addresslist object that
# specifies the search base to be applied for this addresslist.
ldap_addresslist_search_base_attribute = zarafaBase

# The attribute containing the name of the addresslist
ldap_addresslist_name_attribute = cn


##########
# Dynamicgroup settings

# Add a filter to the dynamicgroup search
# Hint: Use the zarafaAccount attribute in the filter to differentiate
# between non-zarafa and zarafa dynamic groups.
# Optional, default = empty (match everything)
ldap_dynamicgroup_search_filter = 

# This is the unique attribute of a dynamicgroup which is never going
# to change, unless the dynamicgroup is removed from LDAP. When this
# value changes, Zarafa will remove the previous dynamicgroup from the
# database, and create a new dynamicgroup with this unique value
ldap_dynamicgroup_unique_attribute = cn

# This value can be 'text' or 'binary'. For OpenLDAP, only text is used.
ldap_dynamicgroup_unique_attribute_type = text

# This is the name of the attribute on the dynamicgroup object that
# specifies the filter to be applied for this dynamicgroup. All users
# matching this filter AND matching the default
# ldap_user_search_filter will be included in the dynamicgroup
ldap_dynamicgroup_filter_attribute = zarafaFilter

# This is the name of the attribute on the dynamicgroup object that
# specifies the search base to be applied for this dynamicgroup.
ldap_dynamicgroup_search_base_attribute = zarafaBase

# The attribute containing the name of the dynamicgroup
ldap_dynamicgroup_name_attribute = cn


##########
# Quota settings

# Optional
# The attribute which indicates which users (besides the user who exceeds his quota)
# should also receive a warning mail when a user exceeds his quota.
ldap_quota_userwarning_recipients_attribute = zarafaQuotaUserWarningRecipients

# Optional, default = text
# Active directory: dn
# LDAP: text
ldap_quota_userwarning_recipients_attribute_type = text

# Optional, default empty
ldap_quota_userwarning_recipients_relation_attribute =

# Optional
# The attribute which indicates which users should receive a warning mail
# when a company exceeds his quota.
ldap_quota_companywarning_recipients_attribute = zarafaQuotaCompanyWarningRecipients

# Optional, default = text
# Active directory: dn
# LDAP: text
ldap_quota_companywarning_recipients_attribute_type = text

# Optional, default empty
ldap_quota_companywarning_recipients_relation_attribute =

# Whether to override the system wide quota settings
ldap_quotaoverride_attribute = zarafaQuotaOverride

ldap_warnquota_attribute = zarafaQuotaWarn
ldap_softquota_attribute = zarafaQuotaSoft
ldap_hardquota_attribute = zarafaQuotaHard

# Whether to override the system wide quota settings for all users within the company
ldap_userdefault_quotaoverride_attribute = zarafaUserDefaultQuotaOverride

ldap_userdefault_warnquota_attribute = zarafaUserDefaultQuotaWarn
ldap_userdefault_softquota_attribute = zarafaUserDefaultQuotaSoft
ldap_userdefault_hardquota_attribute = zarafaUserDefaultQuotaHard

# Mapping from the quota attributes to a number of bytes.  Qmail-LDAP
# schema uses bytes (1), ADS uses kilobytes (1024*1024).
ldap_quota_multiplier = ifelse(TYPE,`OPENLDAP',`1',`1048576')

##########
# Misc. settings

# Attribute which indicates if the user should be hidden from addressbook
ldap_addressbook_hide_attribute = zarafaHidden 

# LDAP object search filter. %s in this filter will be replaced with
# the object being searched.
# Hint: Use the zarafaAccount attribute in the filter to differentiate
# between non-zarafa and zarafa objects.
# Default: empty
# ADS recommended: (anr=%s)
# OpenLDAP optional: (|(mail=%s*)(uid=%s*)(cn=*%s*)(fullname=*%s*)(givenname=*%s*)(lastname=*%s*)(sn=*%s*))
ldap_object_search_filter = ifelse(TYPE,`OPENLDAP',`',`(anr=%s)')

# If a request want more objects than this value, it will download the
# full ldap tree (from the base with the search filter) and discard
# wat was not required. This is faster for large requests.
# Default: 1000
ldap_filter_cutoff_elements = 1000

ifelse(MULTISERVER,`1',,`m4exit(0)')dnl
##########
# Multi-server settings

# Users will be created on this named server
# Optional, default zarafaUserServer
ldap_user_server_attribute = zarafaUserServer

# Users will have a private archive store on these names servers.
# Optional, default zarafaUserArchiveServers
ldap_user_archive_servers_attribute = zarafaUserArchiveServers

# Users will have a many-to-one archive on these store:folder pairs.
# The expected result is a list of <username>:<foldername> pairs, where each
# username will be used to resolve the store in which the folder named
# foldername will be used as the archive.
# Optional, default zarafaUserArchiveCouplings
ldap_user_archive_couplings_attribute = zarafaUserArchiveCouplings

# The public store of the company will be created on this named server
# Optional, default zarafaCompanyServer
ldap_company_server_attribute = zarafaCompanyServer

# Optional
# Active directory: zarafaHostAddress
# LDAP: ipHostNumber
ldap_server_address_attribute = ifelse(TYPE,`OPENLDAP',`ipHostNumber',`zarafaHostAddress')

# Optional, default = zarafaHttpPort
# Active directory: zarafaHttpPort
# LDAP: zarafaHttpPort
ldap_server_http_port_attribute = zarafaHttpPort

# Optional, default = zarafaSslPort
# Active directory: zarafaSslPort
# LDAP: zarafaSslPort
ldap_server_ssl_port_attribute = zarafaSslPort

# Optional, default = zarafaFilePath
# Active directory: zarafaFilePath
#LDAP: zarafaFilePath
ldap_server_file_path_attribute = zarafaFilePath

# Determines if a server contains the public store of a non-hosted
# environment. Only one server is allowed to host the public store.
# Optional, default = zarafaContainsPublic
# Active directory: zarafaContainsPublic
# LDAP: zarafaContainsPublic
ldap_server_contains_public_attribute = zarafaContainsPublic

# Search for servers using this LDAP filter.  See ldap_search(3) or RFC
# 2254 for details on the filter syntax.
# Optional, default = empty (match everything)
# For active directory, use:
#   (objectCategory=Computer)
# For LDAP with posix users, use:
#   
ldap_server_search_filter = ifelse(TYPE,`OPENLDAP',`',`(objectCategory=Computer)')

# Unique user id to find the server
# Required
# For active directory, use:
#    CN
# For LDAP with posixAccount, use:
#    cn
ldap_server_unique_attribute = cn
