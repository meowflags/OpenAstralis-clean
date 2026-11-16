// sub_4F41BC0
// rva 0x04f41bc0  size 390  section .text  group text
// window base 0x184f41bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F41BC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 result; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB84E0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F41D60();
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 40);
    v13 = v12 + 16;
    if ( (unsigned __int64)(v12 + 16) > *(_QWORD *)(v11 + 32) )
    {
      return sub_184F41CE1(a1: 43286056, a2, a3, a4, a5: v12, a6: v13, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_QWORD *)v12 = 43286056;
      *(_DWORD *)(v12 + 8) = 1;
      *(_DWORD *)(v12 + 12) = 0;
      *(_DWORD *)(v12 + 12) = *(_DWORD *)(v10 + 4LL * (unsigned int)(*(char *)(a3 + 4) + 128) + 376353204);
      v14 = *(_QWORD *)(v11 + 40);
      v15 = v14 + 32;
      if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v11 + 32) )
      {
        v23 = v12;
        v24 = a3;
        v14 = sub_1EAA920(a1: v15, a2, a3: 43286168);
        v12 = v23;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v15;
        *(_DWORD *)v14 = 43286168;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v14 + 24) = 0;
        v24 = a3;
      }
      v22 = v14;
      v23 = v12;
      sub_5061EA0(a1: v10 + 377133656, a2: v12, a3: v14, a4, a5: v10 + 377133624, a6: v10 + 365339176);
      result = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v11 + 32) )
      {
        result = sub_1EAA920(a1: v17, a2: v18, a3: 34201016);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = result + 16;
        *(_DWORD *)result = 34201016;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      v20 = (unsigned __int64)(v22 - v10) >> 3;
      *(_DWORD *)(result + 4) = v20;
      if ( *(int *)(v11 + 16) <= 0 )
        return sub_277F280(a1: v17, a2: v18, a3: v20, a4: v16, a5: v23);
    }
  }
  return result;
}
