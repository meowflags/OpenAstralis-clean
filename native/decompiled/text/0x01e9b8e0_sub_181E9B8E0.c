// sub_181E9B8E0
// rva 0x01e9b8e0  size 180  section .text  group text
// window base 0x181e9b8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9B8E0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  BOOL v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // ecx
  char v12; // [rsp+0h] [rbp-48h] BYREF
  char v13; // [rsp+8h] [rbp-40h] BYREF
  void *v14; // [rsp+10h] [rbp-38h]
  char *v15; // [rsp+18h] [rbp-30h]
  __int64 v16; // [rsp+20h] [rbp-28h]
  BOOL v17; // [rsp+34h] [rbp-14h]
  __int64 v18; // [rsp+38h] [rbp-10h]
  __int64 v19; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v12);
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
    return sub_181E9B9A0();
  }
  else
  {
    v14 = nullptr;
    v15 = nullptr;
    v16 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = &v13;
    v19 = a3;
    v18 = a5;
    v14 = &loc_181E9B926;
    v15 = &v12;
    *(_DWORD *)(v6 + 20) = 3;
    v7 = sub_181E9A700(a1, a2, a3, a4: a5, a5);
    v10 = v7;
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
    {
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
    }
    else
    {
      v17 = v7;
      MEMORY[0x18277F4A0](a1: v8, a2: v9, a3: 1, a4: v7, a5: 1);
      v10 = v17;
    }
    if ( *(int *)(v6 + 16) <= 0 )
    {
      v17 = v10;
      MEMORY[0x18277F280]();
    }
    return v10;
  }
}
