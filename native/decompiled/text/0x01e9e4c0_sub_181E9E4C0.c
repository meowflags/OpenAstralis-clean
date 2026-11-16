// sub_181E9E4C0
// rva 0x01e9e4c0  size 134  section .text  group text
// window base 0x181e9e4c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9E4C0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]
  unsigned __int64 v14; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v12 = a3;
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v11);
LABEL_9:
    MEMORY[0x18276EFE0]();
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
    return sub_181E9E560();
  }
  if ( a5 >> 22 << 19 < 0x400000 )
    JUMPOUT(0x303D284ECLL);
  if ( *(_DWORD *)(a3 + 8) == 0 )
    goto LABEL_9;
  v14 = a5 >> 22 << 19;
  v13 = a5;
  v12 = a3;
  v8 = sub_181E9F5A0(a1, a2, a3: v6 + 376657072);
  v9 = v14;
  if ( *(int *)(v7 + 16) <= 0 )
    v8 = MEMORY[0x18277F280]();
  if ( v8 < v9 )
    JUMPOUT(0x303D28521LL);
  return v9;
}
