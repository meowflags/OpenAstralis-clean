// sub_181E9C760
// rva 0x01e9c760  size 301  section .text  group text
// window base 0x181e9c760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9C760(__int64 a1, __int64 a2, unsigned int *a3, int a4, __int64 a5, int a6, double a7)
{
  unsigned int *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 result; // rax
  unsigned int *v11; // r9
  unsigned int *v12; // rcx
  __int64 v13; // r8
  unsigned int *v14; // r8
  unsigned int *v15; // rax
  char v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned int *v17; // [rsp+8h] [rbp-30h]
  __int64 v18; // [rsp+10h] [rbp-28h]
  unsigned int *v19; // [rsp+18h] [rbp-20h]
  unsigned int *v20; // [rsp+20h] [rbp-18h]
  unsigned int *v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a5;
    sub_181EB83C0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v16);
  }
  else if ( a3 != v7 )
  {
    v20 = a3;
    v9 = a3[13];
    result = v7[2 * v9];
    v11 = &v7[2 * v9];
    v12 = v7 + 8519680;
    if ( (result & 1) != 0 )
    {
      v21 = v7 + 8519680;
      v19 = v11;
      v18 = a5;
    }
    else
    {
      if ( v11 == v7 )
        JUMPOUT(0x303D2681BLL);
      v19 = v11;
      v22 = (__int64)v12 + (((char *)v11 - (char *)v12) & 0xFFFFFFFFFFF80000LL);
      v18 = a5;
      v21 = v7 + 8519680;
      result = sub_181E9C580(a1: a7);
      a3 = v20;
    }
    v13 = a3[9];
    if ( (_DWORD)v13 != 0 )
      v14 = &v7[2 * v13];
    else
      v14 = &v7[2 * a3[11]];
    if ( v14 == v7 )
    {
      v17 = v14;
    }
    else
    {
      v15 = (unsigned int *)((char *)v14 - *((_QWORD *)v14 - 1));
      v17 = v14;
      v21 = v15;
      result = sub_181E9C580(a1: a7);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3, a4: v12, a5: v17, a6: v19);
    return result;
  }
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
  return sub_181E9C8A0();
}
