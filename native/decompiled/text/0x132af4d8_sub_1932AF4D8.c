// sub_1932AF4D8
// rva 0x132af4d8  size 487  section .text  group text
// window base 0x1932af4d8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AF4D8(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // edx
  int v36; // ecx
  int v37; // edi
  int v38; // esi
  int v39; // r8d
  int v40; // r9d
  int v41; // eax
  __int64 v43; // [rsp+0h] [rbp-178h] BYREF
  int v44; // [rsp+8h] [rbp-170h]
  int v45; // [rsp+10h] [rbp-168h]
  __int64 v46; // [rsp+20h] [rbp-158h]
  __int64 v47; // [rsp+28h] [rbp-150h]
  __int64 v48; // [rsp+30h] [rbp-148h]
  _QWORD v49[2]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v50[272]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v51; // [rsp+160h] [rbp-18h]

  v2 = MEMORY[0x79460](a1, a2, a3: v50, a4: 0, a5: 260);
  if ( (unsigned int)MEMORY[0x79758](a1: v3) == 122 || (unsigned int)(v2 - 1) > 0x102 )
  {
    MEMORY[0x3375B8] = 0;
  }
  else
  {
    v9 = sub_1932CA173(a1: v5, a2: v6, a3: 92, a4: v50);
    *(_BYTE *)sub_1932CA173(a1: v9 + 1, a2: v10, a3: 46, a4: v9 + 1) = 0;
    v14 = sub_1932CA1FD(a1: v12, a2: v13, a3: v11, a4: v12);
    v17 = MEMORY[0x79AD0](a1: v16, a2: v14, a3: v15, a4: v14 + 1);
    v18 = v17;
    if ( v17 != 0 )
    {
      MEMORY[0x79C40](a1: v5, a2: v6, a3: v5, a4: v17, a5: v6);
      *(_BYTE *)(v18 + v6) = 0;
    }
    MEMORY[0x3375B8] = v18;
    if ( v18 != 0
      && (unsigned int)sub_1932AFE68(
                         a1: v5,
                         a2: v6,
                         a3: (unsigned int)v49,
                         a4: 230,
                         a5: v7,
                         a6: v8,
                         a7: v43,
                         a8: v44,
                         a9: v45) == 0 )
    {
      v6 = v49[0];
      if ( v49[0] != 0 )
      {
        if ( (unsigned int)sub_1932AFE68(
                             a1: v5,
                             a2: v49[0],
                             a3: (unsigned int)v49,
                             a4: 784,
                             a5: v7,
                             a6: v8,
                             a7: v43,
                             a8: v44,
                             a9: v45) != 0 )
        {
          v22 = 0;
        }
        else
        {
          v20 = v49[0];
          v22 = v49[0];
          if ( v49[0] != 0 )
          {
            v23 = sub_1932CA1FD(a1: v49[0], a2: v21, a3: v19, a4: MEMORY[0x3375B8]);
            v27 = sub_1932CA1FD(a1: v25, a2: v26, a3: v24, a4: v26) + v23;
            v31 = sub_1932CA1FD(a1: v29, a2: v30, a3: v28, a4: v29) + v27;
            MEMORY[0x3375C0] = MEMORY[0x79AD0](a1: v33, a2: v34, a3: v32, a4: v31 + 8);
            if ( MEMORY[0x3375C0] != 0 )
            {
              v48 = v20;
              v47 = 542396;
              v46 = MEMORY[0x3375B8];
              sub_19329EDE0(a1: v20, a2: v21, a3: v31 + 8, a4: MEMORY[0x3375C0], a5: 542200);
              v41 = sub_1932AF7D4(a1: v37, a2: v38, a3: v35, a4: v36, a5: v39, a6: v40);
              if ( v41 != -1 )
                MEMORY[0x3375C8] = v41 + 1;
            }
          }
        }
        MEMORY[0x79AE0](a1: v20, a2: v21, a3: v19, a4: v21);
        if ( v22 != 0 )
          MEMORY[0x79AE0](a1: v5, a2: v6, a3: v4, a4: v22);
      }
    }
  }
  return sub_1932C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v43 ^ v51, a5: v7, a6: v8);
}
