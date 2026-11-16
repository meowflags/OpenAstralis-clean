// sub_182779220
// rva 0x02779220  size 262  section .text  group text
// window base 0x182779220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182779220(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 result; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // edi
  int v30; // esi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // [rsp+0h] [rbp-38h] BYREF
  int v34; // [rsp+14h] [rbp-24h]
  __int64 v35; // [rsp+18h] [rbp-20h]
  __int64 v36; // [rsp+20h] [rbp-18h]
  __int64 v37; // [rsp+28h] [rbp-10h]
  __int64 v38; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v13 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_182779340(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32, a7);
  }
  else
  {
    v14 = *(unsigned int *)(a5 + 116);
    v15 = v12 + 8 * v14;
    if ( (_DWORD)v14 != 0 )
    {
      v34 = *(_DWORD *)(a5 + 116);
      v38 = a6;
      v35 = a5;
      v36 = v12 + 8 * v14;
      v16 = sub_18277AE40(a1, a2, a3: v36, a4: v15, a5: 0);
      if ( v16 != 0 )
      {
        if ( v34 == *(_DWORD *)(v13 + 72) )
        {
          return sub_1827792D0(a1: v18, a2: v19, a3: v34, a4: v17, a5: v20, a6: v21, a7, a8, a9, a10, a11, a12);
        }
        else
        {
          v37 = v16;
          v22 = sub_18277AFA0(a1: v18, a2: v19, a3: v36);
          result = MEMORY[0x181EF0120](a1: v24, a2: v25, a3: v22, a4: v23, a5: v37);
          if ( *(int *)(v13 + 16) <= 0 )
            JUMPOUT(0x182779307LL);
        }
      }
      else
      {
        if ( *(int *)(v13 + 16) <= 0 )
          JUMPOUT(0x1827792FCLL);
        return v12;
      }
    }
    else
    {
      return sub_1827792A2(a1, a2, a3, a4: v15, a5, a6, a7, a8, a9, a10, a11, a12);
    }
  }
  return result;
}
