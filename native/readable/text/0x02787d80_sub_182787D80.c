// sub_2787D80
// rva 0x02787d80  size 877  section .text  group text
// window base 0x182787d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2787D80(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  unsigned int v16; // [rsp+14h] [rbp-14h]
  unsigned int v17; // [rsp+18h] [rbp-10h]
  unsigned int v18; // [rsp+1Ch] [rbp-Ch]
  __int64 v19; // [rsp+20h] [rbp-8h]

  v19 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2788100();
  }
  else
  {
    v8 = *(_QWORD *)(a5 + 120);
    v18 = a2;
    v17 = a1;
    v16 = a6;
    v15 = v6 + 376612120;
    sub_1599940(a1: a6, a2: a1, a3: v6 + 376612120, a4: a2, a5: v6 + 367720992, a6: v8);
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367720816, a6: *(_QWORD *)(v19 + 144));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367719640, a6: *(_QWORD *)(v19 + 128));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367719336, a6: *(_QWORD *)(v19 + 136));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367720856, a6: *(_QWORD *)(v19 + 160));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367693704, a6: *(_QWORD *)(v19 + 168));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367719560, a6: *(_QWORD *)(v19 + 176));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367693664, a6: *(_QWORD *)(v19 + 152));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367723832, a6: *(_QWORD *)(v19 + 184));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367723600, a6: *(_QWORD *)(v19 + 192));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367724656, a6: *(_QWORD *)(v19 + 200));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367724616, a6: *(_QWORD *)(v19 + 208));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367724576, a6: *(_QWORD *)(v19 + 216));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367724536, a6: *(_QWORD *)(v19 + 224));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367724496, a6: *(_QWORD *)(v19 + 232));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367724456, a6: *(_QWORD *)(v19 + 240));
    sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 371002232, a6: *(int *)(v19 + 68));
    result = sub_1599940(a1: v16, a2: v17, a3: v15, a4: v18, a5: v6 + 367700816, a6: *(_QWORD *)(v19 + 248));
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v12, a2: v13, a3: v10, a4: v11);
  }
  return result;
}
