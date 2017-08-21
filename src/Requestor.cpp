/*
 * Requestor.cpp
 *
 *  Created on: Aug 11, 2017
 *      Author: leec
 */

#include<iostream>
#include<stdlib.h>
#include<curl/curl.h>
using namespace std;

int main() {
	curl_global_init( CURL_GLOBAL_ALL );
	CURL * handle;
	CURLcode result;
	handle = curl_easy_init();
	curl_easy_setopt(handle, CURLOPT_URL, "https://mesonet.agron.iastate.edu/cgi-bin/wms/iowa/rainfall.cgi?VERSION=1.1.1&REQUEST=GetCapabilities&SERVICE=WMS&");
	result = curl_easy_perform(handle);
	curl_easy_cleanup(handle);


	return 0;
}



