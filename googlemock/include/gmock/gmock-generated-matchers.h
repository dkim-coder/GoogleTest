// This file was GENERATED by command:
//     pump.py gmock-generated-matchers.h.pump
// DO NOT EDIT BY HAND!!!

// Copyright 2008, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// Google Mock - a framework for writing C++ mock classes.
//
// This file implements some commonly used variadic matchers.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_MATCHERS_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_MATCHERS_H_

#include <iterator>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include "gmock/gmock-matchers.h"

#define GMOCK_INTERNAL_MATCHER(name, description)\
  class name##Matcher : public \
      ::testing::internal::MatcherBaseImpl<name##Matcher> {\
   public:\
    using name##Matcher::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl()\
           {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<>()));\
      }\
    };\
  };\
  inline name##Matcher name() {\
    return name##Matcher();\
  }\
  template <typename arg_type>\
  bool name##Matcher::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P(name, description, p0)\
  template <typename p0##_type>\
  class name##MatcherP : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP<p0##_type>> {\
   public:\
    using name##MatcherP::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      explicit gmock_Impl(p0##_type gmock_p0)\
           : p0(::std::move(gmock_p0)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type>(p0)));\
      }\
    };\
  };\
  template <typename p0##_type>\
  inline name##MatcherP<p0##_type> name(p0##_type p0) {\
    return name##MatcherP<p0##_type>(p0);\
  }\
  template <typename p0##_type>\
  template <typename arg_type>\
  bool name##MatcherP<p0##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P2(name, description, p0, p1)\
  template <typename p0##_type, typename p1##_type>\
  class name##MatcherP2 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP2<p0##_type, \
      p1##_type>> {\
   public:\
    using name##MatcherP2::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type>(p0, p1)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type>\
  inline name##MatcherP2<p0##_type, p1##_type> name(p0##_type p0, \
      p1##_type p1) {\
    return name##MatcherP2<p0##_type, p1##_type>(p0, p1);\
  }\
  template <typename p0##_type, typename p1##_type>\
  template <typename arg_type>\
  bool name##MatcherP2<p0##_type, \
      p1##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P3(name, description, p0, p1, p2)\
  template <typename p0##_type, typename p1##_type, typename p2##_type>\
  class name##MatcherP3 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP3<p0##_type, \
      p1##_type, p2##_type>> {\
   public:\
    using name##MatcherP3::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type>(p0, p1, p2)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type>\
  inline name##MatcherP3<p0##_type, p1##_type, p2##_type> name(p0##_type p0, \
      p1##_type p1, p2##_type p2) {\
    return name##MatcherP3<p0##_type, p1##_type, p2##_type>(p0, p1, p2);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type>\
  template <typename arg_type>\
  bool name##MatcherP3<p0##_type, p1##_type, \
      p2##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P4(name, description, p0, p1, p2, p3)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type>\
  class name##MatcherP4 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP4<p0##_type, \
      p1##_type, p2##_type, p3##_type>> {\
   public:\
    using name##MatcherP4::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type>(p0, \
                    p1, p2, p3)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type>\
  inline name##MatcherP4<p0##_type, p1##_type, p2##_type, \
      p3##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, \
      p3##_type p3) {\
    return name##MatcherP4<p0##_type, p1##_type, p2##_type, p3##_type>(p0, \
        p1, p2, p3);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type>\
  template <typename arg_type>\
  bool name##MatcherP4<p0##_type, p1##_type, p2##_type, \
      p3##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P5(name, description, p0, p1, p2, p3, p4)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type>\
  class name##MatcherP5 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP5<p0##_type, \
      p1##_type, p2##_type, p3##_type, p4##_type>> {\
   public:\
    using name##MatcherP5::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)), \
               p4(::std::move(gmock_p4)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
      p4##_type const p4;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type>(p0, p1, p2, p3, p4)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type>\
  inline name##MatcherP5<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, p3##_type p3, \
      p4##_type p4) {\
    return name##MatcherP5<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type>(p0, p1, p2, p3, p4);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type>\
  template <typename arg_type>\
  bool name##MatcherP5<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P6(name, description, p0, p1, p2, p3, p4, p5)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type>\
  class name##MatcherP6 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP6<p0##_type, \
      p1##_type, p2##_type, p3##_type, p4##_type, p5##_type>> {\
   public:\
    using name##MatcherP6::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)), \
               p4(::std::move(gmock_p4)), p5(::std::move(gmock_p5)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
      p4##_type const p4;\
      p5##_type const p5;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type>(p0, p1, p2, p3, p4, p5)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type>\
  inline name##MatcherP6<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, \
      p3##_type p3, p4##_type p4, p5##_type p5) {\
    return name##MatcherP6<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type>(p0, p1, p2, p3, p4, p5);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type>\
  template <typename arg_type>\
  bool name##MatcherP6<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P7(name, description, p0, p1, p2, p3, p4, p5, \
    p6)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type>\
  class name##MatcherP7 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP7<p0##_type, \
      p1##_type, p2##_type, p3##_type, p4##_type, p5##_type, p6##_type>> {\
   public:\
    using name##MatcherP7::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)), \
               p4(::std::move(gmock_p4)), p5(::std::move(gmock_p5)), \
               p6(::std::move(gmock_p6)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
      p4##_type const p4;\
      p5##_type const p5;\
      p6##_type const p6;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type>(p0, p1, p2, p3, p4, p5, \
                    p6)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type>\
  inline name##MatcherP7<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type> name(p0##_type p0, p1##_type p1, \
      p2##_type p2, p3##_type p3, p4##_type p4, p5##_type p5, \
      p6##_type p6) {\
    return name##MatcherP7<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type>(p0, p1, p2, p3, p4, p5, p6);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type>\
  template <typename arg_type>\
  bool name##MatcherP7<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type, p6##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P8(name, description, p0, p1, p2, p3, p4, p5, \
    p6, p7)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type>\
  class name##MatcherP8 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP8<p0##_type, \
      p1##_type, p2##_type, p3##_type, p4##_type, p5##_type, p6##_type, \
      p7##_type>> {\
   public:\
    using name##MatcherP8::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6, p7##_type gmock_p7)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)), \
               p4(::std::move(gmock_p4)), p5(::std::move(gmock_p5)), \
               p6(::std::move(gmock_p6)), p7(::std::move(gmock_p7)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
      p4##_type const p4;\
      p5##_type const p5;\
      p6##_type const p6;\
      p7##_type const p7;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type, p7##_type>(p0, p1, p2, \
                    p3, p4, p5, p6, p7)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type>\
  inline name##MatcherP8<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type> name(p0##_type p0, \
      p1##_type p1, p2##_type p2, p3##_type p3, p4##_type p4, p5##_type p5, \
      p6##_type p6, p7##_type p7) {\
    return name##MatcherP8<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type, p7##_type>(p0, p1, p2, p3, p4, p5, \
        p6, p7);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type>\
  template <typename arg_type>\
  bool name##MatcherP8<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type, p6##_type, \
      p7##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P9(name, description, p0, p1, p2, p3, p4, p5, \
    p6, p7, p8)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type>\
  class name##MatcherP9 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP9<p0##_type, \
      p1##_type, p2##_type, p3##_type, p4##_type, p5##_type, p6##_type, \
      p7##_type, p8##_type>> {\
   public:\
    using name##MatcherP9::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6, p7##_type gmock_p7, p8##_type gmock_p8)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)), \
               p4(::std::move(gmock_p4)), p5(::std::move(gmock_p5)), \
               p6(::std::move(gmock_p6)), p7(::std::move(gmock_p7)), \
               p8(::std::move(gmock_p8)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
      p4##_type const p4;\
      p5##_type const p5;\
      p6##_type const p6;\
      p7##_type const p7;\
      p8##_type const p8;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type, p7##_type, \
                    p8##_type>(p0, p1, p2, p3, p4, p5, p6, p7, p8)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type>\
  inline name##MatcherP9<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type, \
      p8##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, p3##_type p3, \
      p4##_type p4, p5##_type p5, p6##_type p6, p7##_type p7, \
      p8##_type p8) {\
    return name##MatcherP9<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type, p7##_type, p8##_type>(p0, p1, p2, \
        p3, p4, p5, p6, p7, p8);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type>\
  template <typename arg_type>\
  bool name##MatcherP9<p0##_type, p1##_type, p2##_type, p3##_type, p4##_type, \
      p5##_type, p6##_type, p7##_type, \
      p8##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#define GMOCK_INTERNAL_MATCHER_P10(name, description, p0, p1, p2, p3, p4, p5, \
    p6, p7, p8, p9)\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type, \
      typename p9##_type>\
  class name##MatcherP10 : public \
      ::testing::internal::MatcherBaseImpl<name##MatcherP10<p0##_type, \
      p1##_type, p2##_type, p3##_type, p4##_type, p5##_type, p6##_type, \
      p7##_type, p8##_type, p9##_type>> {\
   public:\
    using name##MatcherP10::MatcherBaseImpl::MatcherBaseImpl;\
    template <typename arg_type>\
    class gmock_Impl : public ::testing::MatcherInterface<\
        GTEST_REFERENCE_TO_CONST_(arg_type)> {\
     public:\
      gmock_Impl(p0##_type gmock_p0, p1##_type gmock_p1, p2##_type gmock_p2, \
          p3##_type gmock_p3, p4##_type gmock_p4, p5##_type gmock_p5, \
          p6##_type gmock_p6, p7##_type gmock_p7, p8##_type gmock_p8, \
          p9##_type gmock_p9)\
           : p0(::std::move(gmock_p0)), p1(::std::move(gmock_p1)), \
               p2(::std::move(gmock_p2)), p3(::std::move(gmock_p3)), \
               p4(::std::move(gmock_p4)), p5(::std::move(gmock_p5)), \
               p6(::std::move(gmock_p6)), p7(::std::move(gmock_p7)), \
               p8(::std::move(gmock_p8)), p9(::std::move(gmock_p9)) {}\
      bool MatchAndExplain(\
          GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
          ::testing::MatchResultListener* result_listener) const override;\
      void DescribeTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(false);\
      }\
      void DescribeNegationTo(::std::ostream* gmock_os) const override {\
        *gmock_os << FormatDescription(true);\
      }\
      p0##_type const p0;\
      p1##_type const p1;\
      p2##_type const p2;\
      p3##_type const p3;\
      p4##_type const p4;\
      p5##_type const p5;\
      p6##_type const p6;\
      p7##_type const p7;\
      p8##_type const p8;\
      p9##_type const p9;\
     private:\
      ::std::string FormatDescription(bool negation) const {\
        ::std::string gmock_description = (description);\
        if (!gmock_description.empty()) {\
          return gmock_description;\
        }\
        return ::testing::internal::FormatMatcherDescription(\
            negation, #name, \
            ::testing::internal::UniversalTersePrintTupleFieldsToStrings(\
                ::std::tuple<p0##_type, p1##_type, p2##_type, p3##_type, \
                    p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, \
                    p9##_type>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9)));\
      }\
    };\
  };\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type, \
      typename p9##_type>\
  inline name##MatcherP10<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, \
      p9##_type> name(p0##_type p0, p1##_type p1, p2##_type p2, p3##_type p3, \
      p4##_type p4, p5##_type p5, p6##_type p6, p7##_type p7, p8##_type p8, \
      p9##_type p9) {\
    return name##MatcherP10<p0##_type, p1##_type, p2##_type, p3##_type, \
        p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, p9##_type>(p0, \
        p1, p2, p3, p4, p5, p6, p7, p8, p9);\
  }\
  template <typename p0##_type, typename p1##_type, typename p2##_type, \
      typename p3##_type, typename p4##_type, typename p5##_type, \
      typename p6##_type, typename p7##_type, typename p8##_type, \
      typename p9##_type>\
  template <typename arg_type>\
  bool name##MatcherP10<p0##_type, p1##_type, p2##_type, p3##_type, \
      p4##_type, p5##_type, p6##_type, p7##_type, p8##_type, \
      p9##_type>::gmock_Impl<arg_type>::MatchAndExplain(\
      GTEST_REFERENCE_TO_CONST_(arg_type) arg,\
      ::testing::MatchResultListener* result_listener GTEST_ATTRIBUTE_UNUSED_)\
          const

#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_MATCHERS_H_
