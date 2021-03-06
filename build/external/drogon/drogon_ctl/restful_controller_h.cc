//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "restful_controller_h.h"
#include <drogon/utils/OStringStream.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <list>
#include <deque>
#include <queue>
#include "create_model.h"
using namespace drogon_ctl;

using namespace drogon;
std::string restful_controller_h::genText(const DrTemplateData& restful_controller_h_view_data)
{
	drogon::OStringStream restful_controller_h_tmp_stream;
	std::string layoutName{""};
	restful_controller_h_tmp_stream << "/**\n";
	restful_controller_h_tmp_stream << " *\n";
	restful_controller_h_tmp_stream << " *  ";
{
    auto & val=restful_controller_h_view_data["fileName"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ".h\n";
	restful_controller_h_tmp_stream << " *  This file is generated by drogon_ctl\n";
	restful_controller_h_tmp_stream << " *\n";
	restful_controller_h_tmp_stream << " */\n";
restful_controller_h_tmp_stream<<"\n";
	restful_controller_h_tmp_stream << "#pragma once\n";
restful_controller_h_tmp_stream<<"\n";
	restful_controller_h_tmp_stream << "#include <drogon/HttpController.h>\n";
restful_controller_h_tmp_stream<<"using namespace drogon;\n";
auto namespaceVector=restful_controller_h_view_data.get<std::vector<std::string>>("namespaceVector");
for(auto &name:namespaceVector)
{
	restful_controller_h_tmp_stream << "namespace ";
restful_controller_h_tmp_stream<<name;
	restful_controller_h_tmp_stream << " \n";
	restful_controller_h_tmp_stream << "{\n";
}
	restful_controller_h_tmp_stream << "/**\n";
	restful_controller_h_tmp_stream << " * @brief this class is created by the drogon_ctl command (";
{
    auto & val=restful_controller_h_view_data["ctlCommand"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ").\n";
	restful_controller_h_tmp_stream << " * this class is a restful API controller.\n";
	restful_controller_h_tmp_stream << " */\n";
	restful_controller_h_tmp_stream << "class ";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ": public drogon::HttpController<";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ">\n";
	restful_controller_h_tmp_stream << "{\n";
	restful_controller_h_tmp_stream << "  public:\n";
	restful_controller_h_tmp_stream << "    METHOD_LIST_BEGIN\n";
	restful_controller_h_tmp_stream << "    // use METHOD_ADD to add your custom processing function here;\n";
auto resource=restful_controller_h_view_data.get<std::string>("resource");
if(resource.empty())
{
	restful_controller_h_tmp_stream << "    METHOD_ADD(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::getOne,\"/{1}\",Get,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    METHOD_ADD(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::get,\"\",Get,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    METHOD_ADD(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::create,\"\",Post,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    METHOD_ADD(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::updateOne,\"/{1}\",Put,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    //METHOD_ADD(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::update,\"\",Put,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    METHOD_ADD(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::deleteOne,\"/{1}\",Delete,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
}else
{
	restful_controller_h_tmp_stream << "    ADD_METHOD_TO(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::getOne,\"";
restful_controller_h_tmp_stream<<resource;
	restful_controller_h_tmp_stream << "/{1}\",Get,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    ADD_METHOD_TO(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::updateOne,\"";
restful_controller_h_tmp_stream<<resource;
	restful_controller_h_tmp_stream << "/{1}\",Put,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    ADD_METHOD_TO(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::deleteOne,\"";
restful_controller_h_tmp_stream<<resource;
	restful_controller_h_tmp_stream << "/{1}\",Delete,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    ADD_METHOD_TO(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::get,\"";
restful_controller_h_tmp_stream<<resource;
	restful_controller_h_tmp_stream << "\",Get,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    ADD_METHOD_TO(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::create,\"";
restful_controller_h_tmp_stream<<resource;
	restful_controller_h_tmp_stream << "\",Post,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
	restful_controller_h_tmp_stream << "    //ADD_METHOD_TO(";
{
    auto & val=restful_controller_h_view_data["className"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << "::update,\"";
restful_controller_h_tmp_stream<<resource;
	restful_controller_h_tmp_stream << "\",Put,Options";
{
    auto & val=restful_controller_h_view_data["filters"];
    if(val.type()==typeid(const char *)){
        restful_controller_h_tmp_stream<<*any_cast<const char *>(&val);
    }else if(val.type()==typeid(std::string)||val.type()==typeid(const std::string)){
        restful_controller_h_tmp_stream<<*any_cast<const std::string>(&val);
    }
}
	restful_controller_h_tmp_stream << ");\n";
}
	restful_controller_h_tmp_stream << "    METHOD_LIST_END\n";
restful_controller_h_tmp_stream<<"\n";
	restful_controller_h_tmp_stream << "    void getOne(const HttpRequestPtr &req,\n";
	restful_controller_h_tmp_stream << "                std::function<void(const HttpResponsePtr &)> &&callback,\n";
	restful_controller_h_tmp_stream << "                std::string &&id);\n";
	restful_controller_h_tmp_stream << "    void updateOne(const HttpRequestPtr &req,\n";
	restful_controller_h_tmp_stream << "                std::function<void(const HttpResponsePtr &)> &&callback,\n";
	restful_controller_h_tmp_stream << "                std::string &&id);\n";
	restful_controller_h_tmp_stream << "    void deleteOne(const HttpRequestPtr &req,\n";
	restful_controller_h_tmp_stream << "                   std::function<void(const HttpResponsePtr &)> &&callback,\n";
	restful_controller_h_tmp_stream << "                   std::string &&id);\n";
	restful_controller_h_tmp_stream << "    void get(const HttpRequestPtr &req,\n";
	restful_controller_h_tmp_stream << "             std::function<void(const HttpResponsePtr &)> &&callback);\n";
	restful_controller_h_tmp_stream << "    void create(const HttpRequestPtr &req,\n";
	restful_controller_h_tmp_stream << "                std::function<void(const HttpResponsePtr &)> &&callback);\n";
restful_controller_h_tmp_stream<<"\n";
	restful_controller_h_tmp_stream << "//    void update(const HttpRequestPtr &req,\n";
	restful_controller_h_tmp_stream << "//                std::function<void(const HttpResponsePtr &)> &&callback);\n";
restful_controller_h_tmp_stream<<"\n";
	restful_controller_h_tmp_stream << "};\n";
 for(size_t i=0;i<namespaceVector.size();++i)
{
    restful_controller_h_tmp_stream<<"}\n";
}
if(layoutName.empty())
{
std::string ret{std::move(restful_controller_h_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = restful_controller_h_view_data;
auto str = std::move(restful_controller_h_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
