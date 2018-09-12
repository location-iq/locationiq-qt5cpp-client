QT += network

HEADERS += \
# Models
    $${PWD}/OAIAddress.h \
    $${PWD}/OAIBalance.h \
    $${PWD}/OAIDaybalance.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAILocation.h \
    $${PWD}/OAINamedetails.h \
# APIs
    $${PWD}/OAIBalanceApi.h \
    $${PWD}/OAIReverseApi.h \
    $${PWD}/OAISearchApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIModelFactory.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIQObjectWrapper.h

SOURCES += \
# Models
    $${PWD}/OAIAddress.cpp \
    $${PWD}/OAIBalance.cpp \
    $${PWD}/OAIDaybalance.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAILocation.cpp \
    $${PWD}/OAINamedetails.cpp \
# APIs
    $${PWD}/OAIBalanceApi.cpp \
    $${PWD}/OAIReverseApi.cpp \
    $${PWD}/OAISearchApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp

