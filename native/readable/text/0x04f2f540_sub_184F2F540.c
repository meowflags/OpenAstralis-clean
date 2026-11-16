// sub_4F2F540
// rva 0x04f2f540  size 518  section .text  group text
// window base 0x184f2f540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2F540(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // [rsp+0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+10h] [rbp-18h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  __int64 v33; // [rsp+20h] [rbp-8h]

  v33 = a5;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v10 + 8) )
  {
    v32 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v9 )
  {
    v11 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v11 == 0 )
    {
LABEL_26:
      v32 = a3;
      sub_2771080();
      goto LABEL_27;
    }
    v12 = *(_DWORD *)(v9 + 8 * v11 + 8);
    v13 = (unsigned int)*(char *)(a5 + 12);
    if ( v12 >> *(_BYTE *)(a5 + 12) < 3 )
      return sub_184F2F61A(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9);
    v32 = a3;
    if ( (unsigned int)sub_4FEBC20(a1, a2, a3: a5, a4: v13, a5: 2) == 58 )
    {
      v23 = *(unsigned int *)(v33 + 4);
      if ( (_DWORD)v23 != 0 )
      {
        result = sub_4FFD140(
                   a1: v15,
                   a2: v16,
                   a3: v33,
                   a4: (unsigned int)*(char *)(v33 + 12),
                   a5: 1,
                   a6: (unsigned int)(*(_DWORD *)(v9 + 8 * v23 + 8) >> *(_BYTE *)(v33 + 12)));
        if ( result != v9 )
        {
          v31 = result;
          v26 = *(unsigned int *)(result + 4);
          if ( (_DWORD)v26 != 0 )
          {
            if ( *(_DWORD *)(v9 + 8 * v26 + 8) >> *(_BYTE *)(result + 12) >= 4u )
            {
              if ( (unsigned int)sub_4FF2200(
                                   a1: v24,
                                   a2: v25,
                                   a3: result,
                                   a4: (unsigned int)*(char *)(result + 12),
                                   a5: v9 + 372574352) != 0 )
              {
                v29 = *(unsigned int *)(v31 + 4);
                if ( (_DWORD)v29 == 0 )
                {
LABEL_32:
                  sub_2771080(a1: v27, a2: v28, a3: v32, a4: v29, a5: v33);
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
                  return sub_4F2F760();
                }
                result = sub_4FFD140(
                           a1: v27,
                           a2: v28,
                           a3: v31,
                           a4: (unsigned int)*(char *)(v31 + 12),
                           a5: 0,
                           a6: (unsigned int)((*(_DWORD *)(v9 + 8 * v29 + 8) >> *(_BYTE *)(v31 + 12)) - 1));
              }
              else
              {
                result = v31;
              }
            }
            goto LABEL_11;
          }
LABEL_30:
          sub_2771080();
LABEL_31:
          sub_2771080();
          goto LABEL_32;
        }
LABEL_29:
        sub_2771080();
        goto LABEL_30;
      }
LABEL_28:
      sub_2771080();
      goto LABEL_29;
    }
    v17 = v33;
    v18 = *(unsigned int *)(v33 + 4);
    if ( (_DWORD)v18 == 0 )
    {
LABEL_27:
      sub_2771080(a1: v15, a2: v16, a3: v14, a4: v18, a5: v17);
      goto LABEL_28;
    }
    if ( *(_DWORD *)(v9 + 8 * v18 + 8) >> *(_BYTE *)(v33 + 12) < 2u )
    {
      result = v33;
    }
    else
    {
      if ( (unsigned int)sub_4FF2200(
                           a1: v15,
                           a2: v16,
                           a3: v33,
                           a4: (unsigned int)*(char *)(v33 + 12),
                           a5: v9 + 372574352) != 0 )
      {
        v21 = *(unsigned int *)(v33 + 4);
        if ( (_DWORD)v21 != 0 )
        {
          result = sub_4FFD140(
                     a1: v19,
                     a2: v20,
                     a3: v33,
                     a4: (unsigned int)*(char *)(v33 + 12),
                     a5: 0,
                     a6: (unsigned int)((*(_DWORD *)(v9 + 8 * v21 + 8) >> *(_BYTE *)(v33 + 12)) - 1));
          goto LABEL_11;
        }
        goto LABEL_31;
      }
      result = v33;
    }
LABEL_11:
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v32 = a3;
  sub_2771080();
  goto LABEL_26;
}
