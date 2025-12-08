/**
 * @file gtest_prod.h
 * @brief Minimal gtest stub for clangd only (no real testing support)
 * @author jwimd (thufv, chen-jw24@mails.tsinghua.edu.cn)
 */

#pragma once

// FRIEND_TEST is used for test visibility. Provide a no-op macro to satisfy
// clangd parsing when real gtest is absent.
#ifndef FRIEND_TEST
#define FRIEND_TEST(test_case_name, test_name) \
  friend class test_case_name##_##test_name##_Test
#endif


