// sub_181E99A80
// rva 0x01e99a80  size 239  section .text  group text
// window base 0x181e99a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E99A80(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  char v16; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  _DWORD *v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    v19 = a5;
    sub_181EB84E0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v16);
LABEL_14:
    v19 = a5;
    MEMORY[0x182771080]();
    goto LABEL_15;
  }
  if ( a5 == v7 )
    goto LABEL_11;
  if ( *a5 >> 3 != 4262015 )
  {
    v19 = a5;
    result = a3;
    goto LABEL_5;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_14;
  v18 = a3;
  ++v7[2 * v10 + 1];
  v11 = (unsigned int)v7[2 * v10 + 2];
  v12 = v7[2 * v10 + 3];
  v17 = &v7[2 * v10];
  v19 = a5;
  MEMORY[0x1857881C0](a1: v12, a2, a3: v17, a4, a5, a6: &v7[2 * v11]);
  result = v18;
  v15 = *(unsigned int *)(v18 + 4);
  if ( (_DWORD)v15 == 0 )
  {
LABEL_15:
    MEMORY[0x182771080]();
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
    return sub_181E99B80();
  }
  if ( v7[2 * v15 + 3] == *(_DWORD *)(v18 + 8) )
  {
    MEMORY[0x182769900](a1: v13, a2: v14, a3: v7 + 94164168, a4: v19, a5: &a7, a6: v17);
LABEL_11:
    v19 = a5;
    result = a3;
  }
LABEL_5:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
