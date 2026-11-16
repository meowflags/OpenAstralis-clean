// sub_181EC0260
// rva 0x01ec0260  size 297  section .text  group text
// window base 0x181ec0260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC0260(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rax
  char v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  int v16; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v8 + 8) )
  {
    v16 = a5;
    v15 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
  }
  else if ( (int)a5 >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 40452240;
    v11 = (4LL * (unsigned int)a5 + 19) & 0x7FFFFFFF8LL;
    if ( v11 >= 0x20000 )
      return sub_181EC0321(a1, a2, a3, a4: 40452240, a5, a6, a7, a8);
    a2 = v9 + v11;
    if ( v9 + v11 > *(_QWORD *)(v8 + 32) )
      return sub_181EC0321(a1, a2, a3, a4: 40452240, a5, a6, a7, a8);
    *(_QWORD *)(v8 + 40) = a2;
    *(_QWORD *)v9 = 40452240;
    *(_DWORD *)(v9 + 8) = a5;
    *(_DWORD *)(v9 + 12) = 0;
    if ( v11 - 16 >= 0x800 )
    {
      v16 = a5;
      v15 = a3;
      memset((void *)(v9 + 16), 0, v11 - 16);
      a1 = v9 + v11;
      v10 = 0;
    }
    else
    {
      for ( i = 16; v11 > i; i += 8LL )
        *(_QWORD *)(v9 + i) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v16 = a5;
      v15 = a3;
      MEMORY[0x18277F280](a1, a2, a3, a4: v10);
    }
    return v9;
  }
  MEMORY[0x182770E80](a1, a2, a3: (unsigned int)a5);
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
  return sub_181EC03A0();
}
