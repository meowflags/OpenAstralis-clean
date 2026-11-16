// sub_18504DDE0
// rva 0x0504dde0  size 403  section .text  group text
// window base 0x18504dde0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504DDE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  _DWORD *v19; // [rsp+20h] [rbp-8h]

  v19 = a3;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a6;
    v17 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v8 = (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a5 >> 3) + 11] & (0x1E9Bu >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))];
    if ( (_DWORD)v8 != 7835 )
    {
LABEL_12:
      v18 = a6;
      v17 = a5;
      MEMORY[0x182770780]();
    }
    else if ( *a5 >> 3 == 5411536 )
    {
      v9 = (unsigned int)a5[1];
      if ( (_DWORD)v9 == 0 )
      {
LABEL_14:
        v18 = a6;
        v17 = a5;
        MEMORY[0x182771080]();
        goto LABEL_15;
      }
      v18 = a6;
      v17 = a5;
      v10 = MEMORY[0x185F89A60](a1, a2, a3: &v6[2 * v9]);
      v12 = v19;
      v13 = *v19 >> 3;
      v14 = v6[2 * v13 + 11] & (0x57Eu >> HIBYTE(v6[2 * v13 + 11]));
      if ( (unsigned __int16)v6[2 * (unsigned int)v6[2 * v13 + 5] + 3 + v14] != 1406 )
      {
LABEL_15:
        MEMORY[0x182770780]();
      }
      else if ( *v19 >> 3 == 5413845 )
      {
        result = MEMORY[0x185F4ACA0](a1: v18, a2: v11, a3: v19, a4: v19, a5: v17, a6: v10);
        if ( *(int *)(v7 + 16) <= 0 )
          return MEMORY[0x18277F280]();
        return result;
      }
      MEMORY[0x18276FC00](a1: v14, a2: v11, a3: v12, a4: v17, a5: v6 + 10827752, a6: v18);
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
      return sub_18504DF80();
    }
    v18 = a6;
    v17 = a5;
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: v8, a5: v6 + 10827770);
    goto LABEL_14;
  }
  v18 = a6;
  MEMORY[0x182771080]();
  goto LABEL_12;
}
