// sub_181E9A800
// rva 0x01e9a800  size 273  section .text  group text
// window base 0x181e9a800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9A800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v22 = a5;
    v21 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
  }
  else if ( a3 != v7 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v22 = a5;
      v21 = a3;
      v9 = sub_181EAA920(a1, a2, a3: 40463176, a4);
      a5 = v22;
      a3 = v21;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 24;
      *(_DWORD *)v9 = 40463176;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(a3 + 60) + *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v9 + 4) = (unsigned __int64)(a5 - v7) >> 3;
    v22 = a5;
    v21 = a3;
    v20 = v9;
    result = sub_181E9D4C0(a1, a2, a3: v7 + 376656768, a4: v21, a5: v21);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v20);
    return result;
  }
  v22 = a5;
  v16 = MEMORY[0x182771080]();
  MEMORY[0x182769900](a1: v17, a2: v18, a3: v16, a4: v21, a5: &a7, a6: v20);
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
  return sub_181E9A920();
}
