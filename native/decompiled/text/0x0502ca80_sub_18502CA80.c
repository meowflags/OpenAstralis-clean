// sub_18502CA80
// rva 0x0502ca80  size 204  section .text  group text
// window base 0x18502ca80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502CA80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  char v16; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    v19 = a6;
    v18 = a5;
    v17 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v7
                                        + 8LL * *(unsigned int *)(v7 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 44)
                                         & (0x16ABu >> HIBYTE(*(_DWORD *)(v7 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 5803 )
  {
    if ( *a3 >> 3 != 4268038 )
    {
LABEL_9:
      MEMORY[0x18276FC00](a1, a2, a3, a4: a5, a5: v7 + 34145240);
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
      return sub_18502CB60(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15, a7);
    }
    v18 = a5;
    v19 = a6;
    v17 = a3;
    sub_185032B40(a1, a2, (_DWORD)a3, a4: a5, a5, a6, a7: v16);
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (__int64)v17;
  }
  v19 = a6;
  v18 = a5;
  v17 = a3;
  MEMORY[0x182770780]();
  goto LABEL_9;
}
