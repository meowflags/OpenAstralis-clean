// sub_181EBC6A0
// rva 0x01ebc6a0  size 567  section .text  group text
// window base 0x181ebc6a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBC6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r9d
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  unsigned int v30; // [rsp+1Ch] [rbp-3Ch]
  unsigned int i; // [rsp+20h] [rbp-38h]
  unsigned int v32; // [rsp+24h] [rbp-34h]
  int v33; // [rsp+28h] [rbp-30h]
  unsigned int v34; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v35; // [rsp+30h] [rbp-28h]
  unsigned int v36; // [rsp+34h] [rbp-24h]
  unsigned int v37; // [rsp+38h] [rbp-20h]
  int v38; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v39; // [rsp+40h] [rbp-18h]
  unsigned int v40; // [rsp+44h] [rbp-14h]
  __int64 v41; // [rsp+48h] [rbp-10h]
  __int64 v42; // [rsp+50h] [rbp-8h]

  v29 = a3;
  v28 = a5;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v27);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_181EBC8E0)();
  }
  else
  {
    v41 = *(int *)(a3 + 12);
    MEMORY[0x185EFE5E0](a1, a2, a3, a4: a3, a5: -1);
    if ( *(_DWORD *)(v28 + 8) == -1 )
    {
      v40 = 0;
      v39 = 0;
      v23 = 0;
    }
    else
    {
      v38 = sub_181EBEFE0(a1: v9, a2: v10, a3: v28, a4: v8, a5: v28, a6: v11, a7: v27);
      v17 = sub_181EBF100(a1: v13, a2: v14, a3: v28, a4: v12, a5: v15, a6: v16, a7: v27);
      LODWORD(v8) = v17 + 4;
      LODWORD(v19) = v28;
      if ( *(_DWORD *)(v28 + 8) == -1 )
      {
        v37 = v17;
        v36 = v17 + 4;
        v8 = v17;
        v18 = 1;
        v35 = 0;
      }
      else
      {
        v34 = 0;
        v33 = 1;
        v32 = v17;
        for ( i = v17 + 4; ; i = v22 )
        {
          v20 = sub_181EBF100(a1: v9, a2: v10, a3: v19, a4: v8, a5: v19, a6: v18, a7: v27);
          if ( i == v20 )
          {
            v30 = v20;
            v8 = v32;
            v18 = (unsigned int)(v33 + 1);
            v21 = v34;
            v19 = v28;
          }
          else if ( v33 < 1 )
          {
            v18 = 1;
            v21 = v34;
            v19 = v28;
            v8 = v20;
          }
          else
          {
            v30 = v20;
            sub_181EBC8E0(a1: v9, a2: v10, a3: v29, a4: i, a5: v32, a6: (unsigned int)v33);
            v21 = v34 + 1;
            v8 = v30;
            v18 = 1;
            v20 = v30;
            v19 = v28;
          }
          v22 = v20 + 4;
          if ( *(_DWORD *)(v19 + 8) == -1 )
            break;
          if ( *(int *)(v7 + 16) <= 0 )
            MEMORY[0x18277F280](a1: v9, a2: v10, a3: v21, a4: v8, a5: v19, a6: v18);
          v34 = v21;
          v33 = v18;
          v32 = v8;
        }
        v37 = v20;
        v36 = v20 + 4;
        v35 = v21;
      }
      if ( (int)v18 < 1 )
      {
        v40 = v8;
        v39 = v18;
        v23 = v35;
      }
      else
      {
        i = v8;
        v34 = v18;
        sub_181EBC8E0(a1: v9, a2: v10, a3: v29, a4: v8, a5: (unsigned int)v8, a6: v18);
        v23 = v35 + 1;
        v42 = v6;
        v40 = i;
        v39 = v34;
      }
    }
    v34 = v23;
    MEMORY[0x185EFE4A0](a1: v9, a2: v10, a3: v29, a4: v8, a5: (int)v23, a6: v41);
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v24, a2: v25, a3: v34, a4: v39);
    return v41;
  }
}
