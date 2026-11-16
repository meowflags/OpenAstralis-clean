// sub_4F381E0
// rva 0x04f381e0  size 367  section .text  group text
// window base 0x184f381e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F381E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
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
    return sub_4F38360(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 56) > *(_QWORD *)(v8 + 32) )
    {
      v20 = a3;
      result = sub_1EAA920(a1, a2, a3: 43284824);
      a3 = v20;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 56;
      *(_DWORD *)result = 43284824;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
    }
    *(_DWORD *)(result + 36) = 95;
    *(_DWORD *)(result + 28) = 80;
    *(_DWORD *)(result + 4) = (unsigned __int64)(result - v7) >> 3;
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v19 = result;
      v20 = a3;
      v10 = sub_1EAA920(a1, a2, a3: 43285688);
      result = v19;
      a3 = v20;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10 + 16;
      *(_DWORD *)v10 = 43285688;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
    }
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(a3 - v7) >> 3;
    *(_DWORD *)(result + 20) = (unsigned __int64)(v10 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v11 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v11) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v19 = result;
      v20 = a3;
      sub_277F280();
      return v19;
    }
  }
  return result;
}
